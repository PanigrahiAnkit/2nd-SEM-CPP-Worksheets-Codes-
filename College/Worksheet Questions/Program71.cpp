// WAP to create a class that will maintain the PersRec of person with details (Name and Age) and find the eldest amongst
// the. The program must use this pointer to return the result by overloading > operator among two objects.

#include <iostream>
using namespace std;

class PersRec
{
    int age;
    string name;

public:
    PersRec(){};

    PersRec(string n, int a) : name(n), age(a){}
    void show()
    {
        cout << "Among the given records, eldest one is :" << endl;
        cout << name << " : " << age << endl;
    }
    PersRec eldest(PersRec b)
    {
        return (b.age > age) ? b : *this;
    }
};

int main()
{
    cout << "\n"
         << endl;
    PersRec ob[3] = {PersRec("Kunal", 17), PersRec("Jatin", 18), PersRec("Ankit", 19)};
    PersRec res;
    for (int i = 0; i < 2; i++)
    {
        res = ob[i].eldest(ob[i + 1]);
    }
    
    res.show();
    return 0;
}
