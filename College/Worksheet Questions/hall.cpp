#include <iostream>
using namespace std;

class check
{
   static int seat;
   string name;
   public :
   void funname(void)
   {
       ++seat;
       if(seat<51){
       cout<<"Enter your name :";
       cin>>name;
       cout<<"Seat Number :" <<seat <<"\n Name :" <<name <<endl;}
      
       else
       {
         cout<<"\n\n Room is full \n";
       }
    }
   };
   int check::seat;
   int main()
   {
       int m=50;
       check number;
       while(m--)
       {
           number.funname();
       }
       return 0;
   }

