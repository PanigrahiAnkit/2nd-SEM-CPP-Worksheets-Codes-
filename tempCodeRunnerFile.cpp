#include <iostream>
#include <cmath>
using namespace std;

int
main ()
{

  int n, digit, first, last, x, y, z, swap_num;
  cout<<"enter the number: ";
  cin>>n;
  digit = (int)log10(n);
  first = (int)(n/pow(10,digit));
  last = n%10;
  
  swap_num = last*pow(10,digit);
  z= first*pow(10,digit);
  x = n % z;
  y = x/10;
  
  swap_num += y;
  swap_num += last;
  
  cout<<"Number after swapping first and last digit: "<<swap_num;
  
  return 0;
}