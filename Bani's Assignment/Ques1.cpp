#include<iostream>
#include<stdarg.h>
using namespace std;

class Shape
{
int a,b,l,r;
public:

void area(int a)
{
cout<<"\n Area of square="<<a*a;
}

void area(int a,int b)
{
cout<<"\n Area of rectangle="<<(a*b);
}

void area(double r)
{
cout<<"\n Area of circle="<<3.14*r*r;
}
};

int main()
{
Shape sh;
sh.area(3);
sh.area(2,3);
sh.area(2.5);
}