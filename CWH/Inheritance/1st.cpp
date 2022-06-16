#include <iostream>
using namespace std;

class employee{
    int id;
    
    public :
    float salary;
    employee(int inpID)
    {
        id = inpID;
        salary = 34.0;
    }
};

class Programmer : public employee
{
    public :
    int languageCode = 9;
};  
int main()
{
    employee ankit(1), abhishek(2);
    cout<<ankit.salary<<endl;   
    cout<<abhishek.salary<<endl;   
    return 0;
}