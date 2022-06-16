#include <iostream>
using namespace std;

int main()
{
    int n, a=0, b=1, c=0;
    cout<<"Enter the limit for fibonacci series: ";
    cin>>n;
    
    int arr[n], last, T;
    
    cout<<"\nThe fibonacci series upto "<<n<<" elements is as follows:\n";
    for(int i=0; i<n; i++){
        cout<<c<<" ";
        
        arr[i]=c;
        last = c;
        
        a=b;
        b=c;
        c=a+b;
    }
    cout<<"\nThe missing elements are:\n";
    for(int i=0; i<=last; i++){
        for(int j=0; j<n; j++){
            if(arr[j]==i){
                T=1;
                break;
            }
            else T=0;
        }
        if(T==0) cout<<i<<" ";
    }

    return 0;
}