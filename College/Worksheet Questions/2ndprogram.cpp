#include <iostream>
using namespace std;
class student {  //by default the value defined here is private

    int marks;   //data member
    public :   //it makes the whole segment written under it as publicly accesible.
    void getmarks()  
    {
        cout<<"Enter the marks :";
        cin>>marks;
    }
    void putmarks()
    {
        cout<< "Marks of student is :" <<marks;
    }
};

int main()
{
    student s;   //(s is teh object, student is the class)
    s.getmarks();
    s.putmarks();

    return 0;
}