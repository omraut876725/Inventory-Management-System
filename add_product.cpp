#include<iostream>
#include"inventry.h"
#include"common.h"
#include<vector>
#include<stdio.h>
#include <algorithm>
using namespace std;
  Status stock::add_product(vector<stock> *vec)
  { int id;
    int quantity;
    double price;
    string name;

   cout<<"Enter product id \n";
   cin>>id;
   cout<<"Enter the name of product \n";
   cin>>name;
   cout<<"Enter the quantity of product \n";
   cin>>quantity;
   cout<<"Enter the price of product \n";
   cin>>price;
   //check if id already present in stock or not

   auto check_id=find_if(vec->begin(), vec->end(),
          [&](const stock& item) { return item.id == id; });
   if(check_id!=vec->end())
   {
    cout<<"Id already exist"<<endl;
    return failure;
   }
   //check p[roduct name is already present or not
   auto check_name=find_if(vec->begin(), vec->end(),
          [&](const stock& item) { return item.name == name; });
   if(check_name!=vec->end())
   {
    cout<<"product name is  already exist"<<endl;
    return failure;
   }
   stock tem(id,name,quantity,price);

   vec->push_back(tem);
   return success;
  }
  //constructor of stock parameterize constructor
  stock::stock(int id,string name,int quantity,double price)
  {
    this->id=id;
    this->name=name;
    this->quantity=quantity;
    this->price=price;
  }