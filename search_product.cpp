#include<iostream>
#include"inventry.h"
#include"common.h"
#include<vector>
#include<stdio.h>
#include <algorithm>

using namespace std;
Status stock::search_product(vector<stock> *vec)
{
    cout<<"Enter product id or name to search product\n";
   cout<<"1.Search by id\n2.Search by name\n";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1: {
                   int id;
                     cout<<"Enter product id\n";
                        cin>>id;
                  auto check_id=find_if(vec->begin(), vec->end(),
          [&](const stock& item) { return item.id == id; });
                  if(check_id!=vec->end())  
                    {
                        cout<<"Product id:"<<(*check_id).id<<endl;
                        cout<<"Product name:"<<(*check_id).name<<endl;
                        cout<<"Product quantity:"<<(*check_id).quantity<<endl;
                        cout<<"Product price:"<<(*check_id).price<<endl;
                        return success;
                    }
                    else
                    {
                         
                         return failure;
                    }
                    break;
                 }
        case 2: {
                   string name;
                     cout<<"Enter product name\n";
                        cin>>name;
                  auto check_name=find_if(vec->begin(), vec->end(),
          [&](const stock& item) { return (item.name) == (name); });
                  if(check_name!=vec->end())  
                    {
                        cout<<"Product id:"<<(*check_name).id<<endl;
                        cout<<"Product name:"<<(*check_name).name<<endl;
                        cout<<"Product quantity:"<<(*check_name).quantity<<endl;
                        cout<<"Product price:"<<(*check_name).price<<endl;
                        return success;
                    }
                    else
                    {
                         
                         return failure;
                    }
                    break;
                 }
        default : {
                    cout<<"Invalid choice\n";   
                    return failure;
                    }
    }
    return failure;
}

   
