#ifndef INVENTRY
#define INVENTRY
#include "common.h"
#include<vector>
using namespace std;
typedef class stock
{
    private :
               int id;
               string name;
               int quantity;
               double price;
    public : Status copy_stock(vector<stock> *vec);
             Status add_product(vector<stock> *vec);
             stock(int id=0,string name="default",int quantity=0,double price=0.0);
             Status display_product(vector<stock> *vec);  
             Status delete_product(vector<stock> *vec);
            Status update_product(vector<stock> *vec);
            Status save_to_file(vector<stock> *vec);
            Status search_product(vector<stock> *vec);

}stock;
#endif
