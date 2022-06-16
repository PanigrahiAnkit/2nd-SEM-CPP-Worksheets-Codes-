// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// void alphabets()
// {
// 	ifstream fin;
// 	fin.open("out.txt");
// 	char ch;
// 	int count=0;
// 	while(!fin.eof())
// 	{
// 		fin.get(ch);
// 		if(isalpha(ch))
// 			count++;
// 	}
// 	cout<<"Number of alphabets in file are "<<count;
// 	fin.close();
#include <iostream>
#include<fstream>
#include<conio.h>
#include<ctype.h>
using namespace std;
int main()
{
//clrscr();
 int count=0;
 char a;

 ofstream ofile("file.txt");
 ofile<<"abcde34fghi43jkl34m234nop2343252qrst34uvwxyz";
 ofile.close();

 ifstream ifile("file.txt");
 while(!ifile.eof())
 {
  ifile.get(a);
  if(isalpha(a))
  count++;
 }
 cout<<count;
 getch();
}
