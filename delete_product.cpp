#include<iostream>
#include"inventry.h"
#include"common.h"
#include<vector>
#include<stdio.h>
#include <algorithm>
using namespace std;
Status stock::delete_product(vector<stock> *vec)
{
    int id;
    cout<<"Enter id of product\n";
    cin>>id;
    auto check_id=find_if(vec->begin(),vec->end(),[&](const stock& item){return item.id==id;});
   if(check_id!=vec->end()) 
   {
     vec->erase(check_id);
     return success;
   }
   else
   {
    cout<<"id not found"<<endl;
    return failure;
   }
   return failure;
}