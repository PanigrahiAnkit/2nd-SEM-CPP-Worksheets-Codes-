// Program 8.1 - WAP to perform exceptional handling for Divide by zero exception

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