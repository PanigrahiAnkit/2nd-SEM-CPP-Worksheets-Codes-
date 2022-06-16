#include <iostream>
using namespace std;

class Rectangle
{
  int l,b, area;
  public :
  Rectangle()
  {
      l = 5;
      b = 6;
      cout<<"\n\n------------ For default constructor ----------\n";
      cout<<"Length and Breadth are :\n" <<"Length :"<<l <<"\n" <<"Breadth :"<<b<<endl;
  }
  Rectangle(int x, int y)
  {
      l = x;
      b = y;
      cout<<"Length and breadth are :\n" <<"length :"<<l <<"\n" <<"Breadth :"<<b <<"\n";
  }
  void Area()
  {
      area=l*b;
      cout<<"Area of the rectangle is :" <<area;
  }
  ~Rectangle()
  {}
};

int main()
{
    int x,y;
    Rectangle r1;
    r1.Area();
    cout<<"\nEnter length and breadth for parameterized constructor :\n";
    cin>>x>>y;
    Rectangle r2(x,y);
    r2.Area();
    return 0;
}