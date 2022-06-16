#include <iostream>
using namespace std;

int main()
{
    int T,Z, X, Y;
    cin>>T;
  
    
    while(T--)
    {
        cin>>X>>Y;
        Z=X%2;

    if(Z==0 && Z==Y )
    {
        cout<<Y<<endl;
    }
    }




    return 0;
}