#include<iostream>
#include"inventry.h"
#include"common.h"
#include<vector>
#include<stdio.h>
#include <algorithm>
using namespace std;

Status stock::update_product(vector<stock> *vec)
{
    int id;
    cout<<"Enter the product id to update product\n";
    cin>>id;
    //check if id already present in stock or not
   auto check_id=find_if(vec->begin(), vec->end(),
          [&](const stock& item) { return item.id == id; });
   if(check_id==vec->end())
   {
    cout<<"Id not exist"<<endl;
    return failure;
   }
   else
   {
      cout<<"Enter wich detail you want to update \n";
      cout<<"1.Update product name\n2.Update product quantity\n3.Update product price\n";
        int choice;
        cin>>choice;
        switch(choice)  
        {
            case 1: {
                        string name;
                        cout<<"Enter the new product name\n";
                        cin>>name;
                        //check p[roduct name is already present or not
                        (*check_id).name=name;
                        break;
                     }

            case 2: {
                        int quantity;
                        cout<<"Enter the new product quantity\n";
                        cin>>quantity;
                        (*check_id).quantity=quantity;
                        break;
                     }
            case 3: {   
                        double price;
                        cout<<"Enter the new product price\n";
                        cin>>price;
                        (*check_id).price=price;
                        break;
                     }
            default : {
                        cout<<"Invalid choice\n";
                        return failure;
                     }  
                     
                    
        }
    }
    return success;
}