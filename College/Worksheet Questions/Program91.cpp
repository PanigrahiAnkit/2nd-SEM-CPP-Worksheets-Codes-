#include <iostream>
#include <conio.h>
using namespace std;

int main()
{  
    cout<<endl;
    int sum=0, n, i;
    cout<<"Enter the number of students in the class :"<<endl;
    cin>>n;
    cout<<"\nEntered number of students are :" <<n<<endl;
    cout<<endl;
    int *N = new int[n];

    cout<<"-------------- The total marks are 500, so input the marks out of 500 --------------"<<endl;
    cout<<"\nEnter the marks of " <<n<<" Students :"<<endl;
    for(i=1; i<n+1; i++)
    {
        cout<<"Marks of " <<i<< " student :";
        cin>>N[i];
    }

    cout<<"\nEntered marks of the students are :"<<endl;
    for(i=1; i<n+1; i++)
    {
        //cout<<"Total marks are " <<N[i]<<endl;
        cout<<N[i]<<endl;
        sum = sum + N[i];
    }

    cout<<"The sum of the marks of "<<n<<" students are :"<<sum<<endl;
    delete(N);
    cout<< "\n--------------        Program by 21BCS2588     ----------------\n";
    return 0;
}