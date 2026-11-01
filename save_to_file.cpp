#include<iostream>
#include"inventry.h"
#include"common.h"
#include<vector>
#include<stdio.h>
#include <algorithm>
using namespace std;
Status stock::save_to_file(vector<stock> *vec)
{
   FILE *fp;
   fp=fopen("stock.txt","w");
   if(fp==NULL)
   {
      cout<<"Error:fail to open file"<<endl;
      return failure;
   }
   fprintf(fp,"%lu\n",vec->size());
  for(int i=0;i<vec->size();i++)
  {
     fprintf(fp,"%d %s %d %lf\n",(*vec)[i].id,(*vec)[i].name.c_str(),(*vec)[i].quantity,(*vec)[i].price);
  }
  fclose(fp);
  return success;
}