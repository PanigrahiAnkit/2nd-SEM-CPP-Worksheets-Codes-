//Write a program to store price list of 5 items and to
// print the largest price as well as the sum of all prices using class in C++

#include <iostream>
using namespace std;

class PriceList
{
   public:
   float item1, item2, item3, item4, item5;
   int i;

   void getdata()
   {
       cout<<"\n\n---------------Enter the price of 5 items :  ------------------"<<endl;
       cout<<"\t\nEnter the price of item 1 :-"<<endl;
       cin>>item1;
       cout<<"Enter the price of item 2 :-"<<endl;
       cin>>item2;
       cout<<"Enter the price of item 3 :-"<<endl;
       cin>>item3;
       cout<<"Enter the price of item 4 :-"<<endl;
       cin>>item4;
       cout<<"Enter the price of item 5 :-"<<endl;
       cin>>item5;  

    float largest;
     if ((item1>item2) && (item1>item3) && (item1>item4) && (item1>item5))
     {    
         cout<<"largest="<<item1<<endl;
     }
     else if ((item2>item1) && (item2>item3) && (item2>item4) && (item2>item5))
     {    
         cout<<"largest="<<item2<<endl;
     }
     else if ((item3>item1) && (item3>item2) && (item3>item4) && (item3>item5))
     {    
         cout<<"largest="<<item3<<endl;
     }
     else if ((item4>item1) && (item4>item3) && (item4>item2) && (item4>item5))
     {    
         cout<<"largest="<<item4<<endl;
     }
     else 
     {
     cout<<"largest="<<item5<<endl;
     } 
   }

   void display()
   {
     cout<<"The price of the item 1 is :"<<item1<<endl;
     cout<<"The price of the item 2 is :"<<item2<<endl;
     cout<<"The price of the item 3 is :"<<item3<<endl;
     cout<<"The price of the item 4 is :"<<item4<<endl;
     cout<<"The price of the item 5 is :"<<item5<<endl;
   }

   void sum()
   {
       float SUM = item1 + item2 + item3 + item4 + item5;
       cout<<"The total price of 5 items : "<<SUM<<endl;
   }
};


int main()
{
    PriceList Price;
    Price.getdata();
    Price.display();
    Price.sum();
    return 0;
}