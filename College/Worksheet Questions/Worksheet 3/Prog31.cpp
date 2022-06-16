//Write a program to find the largest & smallest of three numbers. (Use inline functions min and max)
#include<iostream>
using namespace std;

inline int max(int a , int b , int c);
inline int min(int a , int b , int c);  

int main() {
    int a , b ,c;
    cout << "\n\nEnter the numbers : \n";
    cin >> a >> b >> c;
    int large = max(a , b ,c);
    cout << "Largest of " << a << " , " << b << " , "  << c << " is " << large <<endl;
    int small = min(a , b ,c);
    cout << "Smallest of " << a << " , " << b << " , "  << c << " is " << small <<endl;
    return 0;
}

inline int max(int a , int b , int c)   
{
    if(a > b  && a > c)
        return a;
    else if(b > c)
        return b;
    else 
        return c;
}

inline int min(int a , int b , int c)   
{
    if(a < b  && a < c)
        return a;
    else if(b < c)
        return b;
    else 
        return c;
}




