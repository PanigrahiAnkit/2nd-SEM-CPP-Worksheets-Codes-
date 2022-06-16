#include<iostream>
using namespace std;
class check{
    static int seat;
    static string name;
public:
   static void funname(void){
       ++seat;
    if(seat<51){
   cout<<"\nEnter Your Name: \n";
   cin>>name;
   cout<<"          Seat Number: "<<seat<<"\n          Name: "<<name<<endl;}
   else{
    cout<<"\n\n                     Room is full \n";}
   }
};
int check::seat;
string check::name;
int main(){
    int m=50;
    check number;
    while (m--){
    number.funname();}
    return 0;
}