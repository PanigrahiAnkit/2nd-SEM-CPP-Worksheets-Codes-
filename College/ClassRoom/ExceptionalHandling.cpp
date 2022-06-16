/*
Exceotion Handling Mechanism :-
1. try : Will write the which can give exception
2. Throw : To be handled perfectly
3. Catch : Here the exception will be thrown to be handled and displayed.

Example 1 :-

int main()
{
    int a,b;
    cout<<"Enter 2 numbers :";
    cin>>a>>b;
    int c=a-b;
    try{
        if(c!=0)
        {
            cout<<"Value is "<<a/c;
        }
        else
        {
            throw(c);
        }
    }
    catch (int i)
    {
        cout<<"The value of c is zero";
    }
    return 0;
}

Example 2 :-)

void divide(int x, int y)
{
  if(y!=0)
  {
      cout<<"The result is" <<x/y;
  }
  else
  {
      throw(y);
  }
  catch(int)
  {
      cout<<"Exception caught inside function";
      throw;
  }
  }

  int main()
  {
      int a,b;
      cout<<"Enter 2 no.s :";
      cin>>a>>b;
      try
      {
          divide(a,b);
          //divide(3,4);
      }
      catch (int i)
      {
          cout<<"Divide by zero";
          cout<<"Exception caught inside main";
      }
      return 0;
  }


*/

/*----------------------------------------------------------------*/
/*
Types of Exception :-)
1. Synchronous Exception
   - If a problem is there in the program or the software.
2. Asynchronous Exception
   - If there is problem in the hardware.
*/

#include <iostream>
using namespace std;

void divide(int x, int y)
{
  try{
  if(y!=0)
  {
      cout<<"The result is :\n" <<x/y;
  }
  else
  {
      throw(y);
  }
  }
  catch(int)
  {
      cout<<"Exception caught inside function"<<endl;
      throw;
  }
  
}

  int main()
  {
      int a,b;
      cout<<"Enter 2 no.s :"<<endl;
      cin>>a>>b;
      try
      {
          divide(a,b);
          cout<<endl;
         // divide(6,6);
      }
      catch (int i)
      {
          cout<<"Divide by zero\n";
          cout<<"Exception caught inside main";
      }
      return 0;
  }