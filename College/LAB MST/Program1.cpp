//WAP to swap the first and last digit of a number (ex- 12345, output : 54321)

#include <iostream>
#include <cmath>
using namespace std;

class num
{
    int n, ldig, fdig, digs, swappedNum;

    public:
    void get()
    {
        cout<<"\n\nEnter the number :" << endl;
        cin>>n;

        ldig = n%10;
        digs = (int) log10(n);
        fdig = (int) (n/pow(10, digs)); 
        swappedNum = ldig;

        swappedNum *= (int)round(pow(10,digs));
        swappedNum += n % ((int) round (pow(10,digs)));
        swappedNum -= ldig;
        swappedNum += fdig;
    }

    void display()
    {
        cout<<"Number after swapping the first and last digit :" << swappedNum;
    }
};

int main()
{
    num sp;
    sp.get();
    sp.display();
    return 0;
}