//WAP to calculate and display the cube of an integer and float variables using function 
//overloading.

#include <iostream>
using namespace std;

//Here we are using the (type of parameters) function overloading.
int cube (int );
double cube (double );  //Here we can't use float() because it will get converted into double.

int main()
{
    int a;
    double b;

    cout<<"Enter an integer :"<<endl;
    cin>>a;
    cout<<"Enter a float value :"<<endl;
    cin>>b;

    cout<<"The cube of the integer number :"<< cube(a)<<endl;
    cout<<"The cube of the float number :"<< cube(b)<<endl;
    return 0;
}

int cube(int x)
{
   return(x*x*x);
}

double cube(double y)
{
    return(y*y*y);
}