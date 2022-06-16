#include <iostream>
using namespace std;
class stud
{
    public:
    int marks;
    void get()
    {
        cout<<"Enter marks :";
        cin>>marks;
    }
    void display()
    {
        cout<<"Marks of the students are :" << marks;
    }
   
};

int main()
{
    stud st;
    st.get();
    st.display();
    return 0;
}