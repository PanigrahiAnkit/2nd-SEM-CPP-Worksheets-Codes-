#include <iostream>
using namespace std;

class Test
{
   int num;
   public :
   Test()
   {
     num = 0;
   }

   Test(int n)
   {
       num = n;
   }

   void display()
   {
       cout<<"Number :"<<num<<endl;
   }

   Test operator++ ()
   {
       ++num;
       return Test(num);
   }

   Test operator++(int )
   {
       Test t(num);
       ++num;
       return t;
   }
};

int main()
{
    cout<<endl;
    Test t1(25), t2(35), t3;
    ++t1;
    t1.display();
    t2++;
    t2.display();
    t3 = t2++;
    t2.display();
    t3.display();
    return 0;
}