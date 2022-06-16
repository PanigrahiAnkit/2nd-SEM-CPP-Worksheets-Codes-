#include<iostream>
#include<string.h>
using namespace std;

class employee
{
    string name;
    int age;
    string designation;
    double salary;
    public:
    void get_data();
    void put_data();
};

void employee :: get_data()
{
    cout<<"Enter name of the employee :"<<endl;
    cin>>name;
    cout<<"Enter employee age :"<<endl;
    cin>>age;
    cout<<"Enter employee designation :"<<endl;
    cin>>designation;
    cout<<"Enter employee salary :"<<endl;
    cin>>salary;
}

void employee :: put_data()
{
    cout<<"Employee name: "<<name<<endl;
    cout<<"Employee age: "<<age<<endl;
    cout<<"Employee designation: "<<designation<<endl;
    cout<<"Employee salary: "<<salary<<endl;
}

int main()
{
    int n, i;
    cout<<"\n\nEnter the number of employees: "<<endl;
    cin>>n;
    employee e[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the details of Employee : "<<i+1<<endl;
        e[i].get_data();
        cout<<"\n"<<endl;
    }
    for(i=0;i<n;i++)
    {
        cout<<"Details of Employee : "<<i<<" are:"<<endl;
        e[i].put_data();
        cout<<"\n"<<endl;
    }
    return 0;
}
