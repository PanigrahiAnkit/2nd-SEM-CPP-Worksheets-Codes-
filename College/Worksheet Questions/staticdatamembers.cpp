#include <iostream>  
#include <string.h>  
using namespace std;  

class Grocery  
{  
int item_price;  
char item_name[20];  
int quant;  
  
public:    
static int static_member;  
  
Grocery()  
{  
static_member++;  
}  
  
void inp()  
{  
cout << " \n\n Enter the name of the item/product : " << endl;  
cin >> item_name; 
cout << " Enter the price of the product(in Rs.) : " << endl;  
cin  >> item_price;  
cout << " Enter the Quantity(in kg) : " << endl;  
cin >> quant;    
}  
  
 
void disp ()  
{  
cout << " \n Name of the product : " << item_name;  
cout << "\n Price of the product : " << item_price;  
cout << " \n Quantity : " << quant;  
  
}   
};  
  
  
int Grocery::static_member = 0;  
  
 int main ()  
{  
 
Grocery g1;  
g1. inp ();  
g1. disp();  
 
Grocery g2;    
g2. inp ();  
g2. disp();  
  
cout << " \n No. of objects created in the class: " << Grocery :: static_member <<endl;  
return 0;  
}  