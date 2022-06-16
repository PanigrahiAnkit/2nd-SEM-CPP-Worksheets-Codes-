#include <iostream>
using namespace std;

class alpha
{
    public:
    alpha(int x)
    {
        cout<<"Constructor alpha has been called"<<endl;
    }
};

class beta
{
    public:
    beta(float y)
    {
       cout<<"Constructor beta has been called"<<endl;
    }
};

class gamma : public alpha, public beta
{
  public:
  gamma(int a, int b, float c, int d) : beta(c), alpha(d)
  {
      cout<<"Constructor gamma has been called"<<endl;
  }
};


int main()
{
    gamma g (5,3,4.3,9);

    return 0;
}