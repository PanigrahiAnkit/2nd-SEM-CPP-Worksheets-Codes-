//Program 1.1 - WAP to find average marks of five subjects of a student in a class.

#include <iostream>
using namespace std;
class stud
{
    int subjects, i;
    float marks, total =0.0f, avgmarks, percentage;
    
    public :
    void get()
    {
        cout<<"Enter the number of subjects :\n";
        cin>>subjects;
        cout<<"Enter the marks of subjects :\n";
        for(i=0; i<subjects; i++)
        {
            cin>>marks;
            total+=marks;
        }
        avgmarks = total/subjects;
    }

    void display()
    {
        cout<<"Total marks of the student is :"<<total;
        cout<<"\nAverage marks of the student is :"<<avgmarks;   
    }
};

int main()
{
    stud st;
    st.get();
    st.display();
    return 0;
}