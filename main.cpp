/*
 * ====================================================================
 *  Project     : Inventory Management System
 *  Name        : Om Raut
 *  Date        : 01-Nov-2026
 *  Batch Id    : 26019f_009
 *  Language    : C++
 *  Description : A console-based program to manage a shop's stock.
 *                Product data is loaded from a file at startup,
 *                edited in memory, and saved back to the file on exit.
 *
 *  Features    :
 *    1. Add product     - add a new product with id, name, quantity
 *                         and price (duplicate id/name not allowed)
 *    2. Display product - show full details of a product by id
 *    3. Search product  - find a product by id or by name
 *    4. Update product  - change the name, quantity or price
 *    5. Delete product  - remove a product by id
 *    6. Exit            - save all data to file and quit
 *
 *  Files       :
 *    main.cpp            - menu and program flow
 *    inventry.h          - stock class declaration
 *    common.h            - Status enum (success / failure)
 *    add_product.cpp    - add feature and stock constructor
 *    display_product.cpp - display feature
 *    search_product.cpp  - search feature
 *    update_product.cpp  - update feature
 *    delete_product.cpp  - delete feature
 *    copy_stock.cpp      - load data from stock.txt into the vector
 *    save_to_file.cpp    - write the vector back to stock.txt
 *
 *  Data file   : stock.txt
 *    First line  : number of products
 *    Other lines : id name quantity price
 *
 *  Note        : Product names must be a single word (no spaces).
 * ====================================================================
 */
#include<iostream>
#include"inventry.h"
#include"common.h"
#include<vector>
using namespace std;
vector<stock>vec;
stock s;
uint count;
int main()
{
   //copty stock data from file to stock vector
   if(s.copy_stock(&vec)==success)
{
  // cout<<"Stock copy done successfully"<<endl;

}
else
{
   cout<<"ERROR:fail to copy stock"<<endl;
   return 0;
}
while(1)
{  cout<<"-----------------------------------------------------------\n";
   cout<<"-----------------------------------------------------------\n";
   cout<<"-----------------Inventory Management System---------------\n";
   cout<<"-----------------------------------------------------------\n";
   cout<<"-----------------------------------------------------------\n";
    cout<< "1.Add product\n2.Display product\n3.Search product\n4.Update product\n5.Delete product\n6.Exit\n";
     cout<<"Enter Your Choice"<<endl;
     int choice;
     cin>>choice;
     switch(choice)
     {
        case 1:   {
                    if(s.add_product(&vec)==success)
                    {
                     cout<<"Product added successfully"<<endl;
                    }
                    else
                    {
                     cout<<"Error:fail to add data"<<endl;
                     
                    }
            break;
             
                   }
        case 2:   {
            if(s.display_product(&vec)==success)
            {
               cout<<"Display product successfully\n";
            }  
            else
            {
               cout<<"product not found \n";
            }
            break;
             
                   }

        case 3:   {
           if(s.search_product(&vec)==success)
            {
               cout<<"search product successfully\n";
            }  
            else
            {
               cout<<"product not found \n";
            }
            break;
             
                   }
        case 4:   {
                     if(s.update_product(&vec)==success)
                     {
                        cout<<"update product successfully"<<endl;
                     }
                     else
                     {
                        cout<<"Error:fail to update product"<<endl;
                     }
            break;
             
                   }
         case 5:   {
           
            if(s.delete_product(&vec)==success)
            {
               cout<<"delete product is successfully"<<endl;
            }
            else
            {
               cout<<"Error:fail to delete product"<<endl;
            }
            break;
         }
         case 6:   {
            if(s.save_to_file(&vec)==success)
            {
               cout<<"save to file is successfully"<<endl;
            }
            else
            {
               cout<<"Error:fail to save to file"<<endl;
            }
            cout<<"Thank you"<<endl;
            return 0;
         }
         default :
                    {
                         cout<<"Enter valid choice\n";

                    }

     }

}
}