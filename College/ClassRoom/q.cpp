// #include <iostream>
// using namespace std;
// class Human{
//     public:
//     void walk()
//     {
//         cout<<"Human Walks";

//     }
// };

// class Boy : public Human {
//     public :
//     void walk(){
//         cout<<"Boy walks";}
//     };
// int main()
// {
//     Human *obj1 == new Boy;
//     Human *obj2 == new Human;
//     obj->walk();
//     obj2->walk();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Test{
//     private:
//     int x;
//     int y;
//     public :
//     Test(int x=0, int y=0) { this->x=x, this->y = y;}
//     static void fun1(){cout<<"Inside fun1()";}
//     static void fun2(){cout<<"Inside fun2()"; fun1();}
// };

// int main()
// {
//     Test obj;
//     obj.fun2();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[]= {1,5,4,9,3,2};
//     int *p1 = arr;
//     int *p2 = arr + 5;
//     cout<<(p2-p1)<<endl;
//     cout<<((char*)p2 - (char*)p1); 
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Std
// {
//     int age;
//     public:
//     Std() : age(24) {}
//     void inputAge() {
//         cout<<"Age="<<age<<endl;
//     }
// };
// int main()
// {
//     Std* stdage=new Std();
//     stdage->inputAge();
//     delete stdage;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class A {
//     public :
//     virtual void a()=0;
//     A(){
//         cout<<"A";}
//     };
//     class B: public A{
//         public:
//         B(){
//             cout<<"B";}
//         };

// int main()
// {
//     A *a=new B();
//     return 0;
// }

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream MyFile("filen.txt");
    MyFile<<"File created";
    MyFile.close();
}