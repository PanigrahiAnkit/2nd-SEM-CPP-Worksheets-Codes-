// Program 1.2 - WAP to swap first and last digits of any number.

#include <iostream>
#include <cmath>
using namespace std;
class num
{
    int n, fdig, ldig, digs, swappedNum, a,b;

    public :
    void get()
    {
        cout<<"Enter the number :"<<endl;
        cin>>n;
        ldig = n%10;  //for last digit
        digs = (int)log10(n);  //for number of digits
        fdig = (int)(n/pow(10,digs));  // for first digit
        swappedNum = ldig;
        swappedNum *= (int) round(pow(10, digs));
        swappedNum += n % ((int)round(pow(10, digs)));
        swappedNum -= ldig;
        swappedNum += fdig;
    }

    void display()
    {
        cout<<"Number after swapping first and last digit :"<<swappedNum;
    }
};

int main()
{
    num sp;
    sp.get();
    sp.display();

    return 0;
}