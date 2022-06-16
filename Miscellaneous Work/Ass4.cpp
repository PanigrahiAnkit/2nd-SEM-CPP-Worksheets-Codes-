// #include<iostream>
// #include<conio.h>
// #include<string.h>
// #include<fstream>
// using namespace std;

// int nooflines()
// {
//                ifstream fin("STORY.TXT");
//                int number=-1;
//                char line[50];
//                while(!fin.eof())
//                {
//                               fin.getline(line,50,'.');
//                               for(int i=0;i<50;i++)
//                               {
//                               if((line[i]!='a'&&line[i]!='A')&&(line[i-1]=='\r'))
//                               number++;
//                               }
//                }
//                cout<<"\nNumber of lines="<<" "<<number;
// }
// int main()
// {
//                ofstream fout;
//                char str[500];
//                fout.open("STORY.TXT");
//                cout<<"\nEnter a string\n";
//                gets(str);
//                fout<<str<<"\n";
//                fout.close();
//                nooflines();
//                getch();
//                return 0;
// }

#include <iostream> //ANSI standard header file
#include <fstream> // header file
using namespace std; // declared scope of the program
int main()

{
    ifstream fin; // fin object created
    fin.open("STORY1.txt"); // open method
    char str[100]; // lenth of string
    int count = -1; // count initialized by zero
    while (!fin.eof())
    {
        fin.getline(str, 100);
        if (str[0] !='A') // first position of line is not equal to ‘A’
            count++;
    }
    cout <<"Number of lines not starting with A are" <<"\t" << count <<"\n";
    fin.close(); // close method to close the file
    return 0;
}