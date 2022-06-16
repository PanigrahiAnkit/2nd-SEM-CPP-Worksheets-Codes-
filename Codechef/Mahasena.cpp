#include <iostream>
using namespace std;

int main()
{
    int s;
    int n, even=0, odd=0;
    cin>>s;

    while(s--)
    {
      
        cin>>n;
    
        if(n%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
        if(even>odd)
        {
            cout<<"READY FOR BATTLE";
        }
        else{
            cout<<"NOT READY";
        }
        
    
    return 0;
}