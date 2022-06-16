#include<iostream>
#include<conio.h>
using namespace std;

class student 
{
    int UID;
    public:
    void getnumber() 
    {
        cout << "Enter your student UID:";
        cin>>UID;
    }
    void putnumber() 
    {
        cout << "\n\tYour UID is :" << UID << "\n";
    }
};

class test : virtual public student 
{
    public:
    float m1, m2, m3, m4, m5;
    void getmarks() 
    {
        cout << "----------------Enter the Marks of the Subjects (out of 40)-----------------\n";
        cout << "Marks of OOPS :";
        cin>>m1;
        cout << "Marks of DE :";
        cin>>m2;
        cout << "Marks of Maths :";
        cin>>m3;
        cout << "Marks of Comm :";
        cin>>m4;
        cout << "Marks of Bio :";
        cin>>m5;
    }
    void putmarks() 
    {
        cout << "\tMarks Obtained are (out of 40) :\n";
        cout << "\n\tOOPS :" << m1;
        cout << "\n\tDE :" << m2;
        cout << "\n\tMaths :" << m3;
        cout << "\n\tComm :" << m4;
        cout << "\n\tBio :" << m5;
    }
};

class sports : public virtual student 
{
    public:
    float score;
    void getscore() 
    {
        cout << "Enter the Sports Score (out of 40):";
        cin>>score;
    }
    void putscore() 
    {
        cout << "\n\tThe Sports Score is:" << score;
    }
};

class result : public test, public sports 
{
    float total;
    public:
    void display() 
    {
        total = m1 + m2 + m3 + m4 + m5 + score;
        putnumber();
        putmarks();
        putscore();
        cout << "\n\tTotal Score:" << total;
    }
};

int main() 
{
    cout<<"\n\n"<<endl;
    result obj;
    obj.getnumber();
    obj.getmarks();
    obj.getscore();
    obj.display();
    return 0;
}

