
#include <iostream>
using namespace std;
class BANK
{
  int AcNum;
  char Name;
  int TotAmt;
  int DedAmt;
  double BalAmt;
  public :
  void getdata()
  {
      cout<<"Enter your 10 digits Account Number :";
      cin>>AcNum;
      cout<<"\nEnter your Name registered with the Account :";
      cin>>Name;
      cout<<"\nEnter your Account Balance :";
      cin>>TotAmt;
      cout<<"\nEnter the amount you want to withdraw :";
      cin>>DedAmt;
      BalAmt = TotAmt-DedAmt;
  }
  
  void display()
  {
      cout<<"\n\nYour Account Number is :"<<AcNum;
      cout<<"\nYour Name Associated with the Account is :"<<Name;
      cout<<"\nYour previous Account Balance is :"<<TotAmt;
      cout<<"\nAmount that you withdraw :"<<DedAmt;
      cout<<"\nBalance Amount is :"<<BalAmt;
  }
};
int main()
{
    BANK b;
    b.getdata();
    b.display();
    return 0;
}
