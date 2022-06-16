#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int a,b,c;
        if(a>b && a>c && b>c)
        {
            cout<<b;
        }
        else if(b>c && b>a && c>a)
        {
            cout<<c;
        }
        else
        {
            cout<<a;
        }
    }
    return 0;
}