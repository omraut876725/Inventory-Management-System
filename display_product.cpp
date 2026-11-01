#include<iostream>
#include"inventry.h"
#include"common.h"
#include<vector>
#include<stdio.h>
using namespace std;
Status stock::display_product(vector<stock> *vec)
{   int id;
    cout<<"Enter id of product\n";
    cin>>id;
    for(int i=0;i<vec->size();i++)
    {
      if(id==(*vec)[i].id)
      {
        cout << "id : "       << (*vec)[i].id       << endl;
        cout << "name : "     << (*vec)[i].name     << endl;
        cout << "quantity : " << (*vec)[i].quantity << endl;
        cout << "price : "    << (*vec)[i].price    << endl;
        cout<<endl;
        return success;
        
      }
    }
    return failure;
}