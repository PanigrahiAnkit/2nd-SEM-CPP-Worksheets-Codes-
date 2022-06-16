#include <iostream>
#include <string.h>
#include <string>

using namespace std;
class Music
{
public:
    string snam, nam, wnam;
    void getdetail()
    {
        cout << " PLease Enter The Song Name :\n";
        getline(cin, snam);
        cout << " Enter the Name of Writter of the song: \n";
        getline(cin, wnam);
        cout << " Enter the Name of Singer: \n";
        getline(cin, nam);
    }
    void outdetail1()
    {
        cout << endl
             << "\n----------------------------------------------------------------------------------------------------------------------------------------------------------";
        cout << endl;
        cin.ignore(256, '\n');
        cout << "\nThe Song \'" << snam << "\' has written by " << wnam << ".The Singer \'" << nam << "\' sung this song in his Beautiful Voice." << endl;
        cout << endl;
    }
    void outdetail2()
    {
        cout << endl
             << "\n----------------------------------------------------------------------------------------------------------------------------------------------------------";
        cout << endl;
        cin.ignore(256, '\n');  //We have to use it if we are using getline function.
        cout << "\nThe Song \'" << snam << "\' has written by " << wnam << ".The Singer \'" << nam << "\' sung this song in her Beautiful Voice." << endl;
        cout << endl;
    }
    void going()
    {
        int c,op;
        cout << " Choose Singer is: (1 or 2)" << endl;
        cout << "1. Male\n2. Female\n--> ";
        cin >> c;
        switch (c)
        {
        case 1:
        {
            outdetail1();
        }
        break;
        case 2:
        {
            outdetail2();
        }
        default:
            cout<<"INVALID CHOICE";
            break;
        }
    }
};
int main()
{
    Music m1, m2;
    m1.getdetail();
    m1.going();
    cout << endl;
    m2.getdetail();
    m2.going();
    return 0;
}