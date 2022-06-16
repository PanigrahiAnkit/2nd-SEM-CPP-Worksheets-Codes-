#include<iostream>
using namespace std;

class complex
{
    private:
    float r;
    float i;
    public:
    void set(float real, float img)
    {
        r = real;
        i = img;
    }
    complex sum(complex c)
    {
        complex t;
        t.r = r + c.r;
        t.i = i + c.i;
        return t;
    }
    void disp()
    {
        if (i == -1) 
        {
            cout<< r << " + -i" <<endl;
        }
        else if (i == 1) 
        {
            cout<< r << " + i" <<endl;
        }
        else if (i == 0) 
        {
            cout<< r <<endl;
        }
        else 
        {
            cout<< r << " + " <<i<< "i" <<endl;
        }
    }
};

int main()
{

    complex c1, c2, c3;
    c1.set(2.5, 3.5);
    c2.set(1.5, 5.5);
    c3 = c1.sum(c2);
    cout<<"Complex Number 1 = ";
    c1.disp();
    cout<<"Complex Number 2 = ";
    c2.disp();
    cout<<"Complex Number 3 = ";
    c3.disp();
    return 0;
}

