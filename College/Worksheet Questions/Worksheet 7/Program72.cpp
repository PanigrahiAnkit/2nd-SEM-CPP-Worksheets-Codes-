#include <iostream>
using namespace std;

class Number
{
    int num;
    public:
    Number()
    { num=0; };
    void inputNumber (void)
    {
        cout<<"Enter an integer number: ";
        cin>>num;
    }
    void displayNumber()
    {
    cout<<"Entered Number : "<<num<<endl;
    }
};

int main()
{
    cout<<"\n"<<endl;
    Number N;
    N.inputNumber();
    N.displayNumber();
    Number *ptrN;
    ptrN = new Number; //Dynamically memory has been allocated here 
    cout<<"Default value... "<<endl;
    ptrN->displayNumber();
    ptrN->inputNumber();
    ptrN->displayNumber();
    return 0;
}
