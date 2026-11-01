#include<iostream>
#include"inventry.h"
#include"common.h"
#include<vector>
#include<stdio.h>
using namespace std;
extern int count;
Status stock::copy_stock(vector<stock> *vec)
{
    FILE *fptr;
    fptr=fopen("stock.txt","r");
    if(fptr==NULL)
    {
        cout<<"Error:fail to open file"<<endl;
        return failure;
    }
    fscanf(fptr,"%d",&count);
   for(int i=0;i<count;i++)
   {
                stock tem;
                char ch[50];
               fscanf(fptr,"%d%s%d%lf",&tem.id,ch,&tem.quantity,&tem.price);
                tem.name=ch;
               vec->push_back(tem);
          
   }
  /* for (size_t i = 0; i < vec->size(); i++)
    {
        cout << "id : "       << (*vec)[i].id       << endl;
        cout << "name : "     << (*vec)[i].name     << endl;
        cout << "quantity : " << (*vec)[i].quantity << endl;
        cout << "price : "    << (*vec)[i].price    << endl;
        cout << endl;
    }*/
    return success;
}