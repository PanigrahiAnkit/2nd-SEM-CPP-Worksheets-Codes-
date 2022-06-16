#include <iostream>
using namespace std;

class student
{
    private:
    string name;
    int  rollNo;
    int  height;
    int weight;
    public:
    student(string n,int r,int h,int w)
    {
        name=n;
        rollNo=r;
        height=h;
        weight=w;
    }
    void display(void);
    ~student();
};

void student::display(void)
{
    cout << "\n\nStudent details:\n";
    cout << "Name:"<< name <<"\n" << "Roll Number:"<< rollNo <<"\n"<< "Height:" << height <<"\n"<< "Weight:" << weight <<endl;
}

student :: ~student()
{
    cout<<"Destructor is called\n";
}

int main()
{
    student std("Ankit",2588,6,72);
    student std1=std;
    std1.display();
    return 0;
}
