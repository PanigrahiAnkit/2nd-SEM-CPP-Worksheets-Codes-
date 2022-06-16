#include <string.h>
#include <iostream>
using namespace std;
class CopyConstructor
{
    char *s_copy;
    public:
    CopyConstructor(const char *str)
    {
//Dynamic memory allocation
   s_copy = new char[16]; 
   strcpy(s_copy, str);
    }
    /* concatenate method */
    void concatenate(const char *str)
    {
//Concatenating two strings
        strcat(s_copy, str); 
    }
    /* copy constructor */
    ~CopyConstructor ()
    { 
        delete [] s_copy;
    }
  
   void display()
    {
        cout<<s_copy<<endl;
    }
};
/* main function */
int main()
{
    CopyConstructor c1("Copy");
    CopyConstructor c2 = c1; //Copy constructor
    c1.display();
    c2.display();
    c1.concatenate("Constructor");    //c1 is invoking concatenate()
    c1.display();
    c2.display();
    return 0;
}
