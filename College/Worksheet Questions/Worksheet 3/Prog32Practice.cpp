#include <iostream>
#define MAX_SIZE 5
using namespace std;

class Guest 
{
    public:
    char name[50];
    static int seatno;
    static int allocate()
    {
        seatno++;
    }
    int display()
    {
        for(int i=0; i<=5; i++){
       cout<<"Name of the Guest :"<<name;}
    }

    int Ankit()
    {
        for(int i=0; i<=5; i++)
        {
            cin>>name;
        }
    }
};

int Guest::seatno;
int main()
{
    
    Guest g[50];
    
    for(int i=0; i<=5; i++)
    {
       g[i].Ankit();
       g[i].display();
       g[i].allocate();
    }   
}

