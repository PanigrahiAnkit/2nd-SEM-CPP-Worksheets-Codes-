//Create a class named BOX having members length, breadth and heigh. Use a class instance 
//to display the box length, box breadth and the box height. Also display the volume of the box.

#include <iostream> 
using namespace std;

class BOX
{
   public :
   float height;
   float breadth;
   float length;
   float volume;

   void getdata()
   {
       cout<<"\n\nEnter the length of the box :-"<<endl;
       cin>>length;
       cout<<"Enter the breadth of the box :-"<<endl;
       cin>>breadth;
       cout<<"Enter the height of the box :-"<<endl;
       cin>>height;
   }

   void display()
   {
       float volume = length*breadth*height;
       cout<<"Volume of box is :-"<<volume<<endl;
   }
};

int main()
{
    BOX box;
    box.getdata();
    box.display();
    return 0;
}