//WAP to copy the contents of one file to another and display it on output screen.
#include<iostream>
#include <fstream>  
using namespace std;

int main()
{
    cout<<"\n"<<endl;
    cout<<"SAGAR ROHILLA"<<endl;
    cout<<"UID : 21BCS1383"<<endl;
    char ch, sourceFile[20], targetFile[20];
    FILE *fs, *ft;
    cout<<"Enter the Name of Source File: ";
    cin>>sourceFile;
    fs = fopen(sourceFile, "r");
    if(fs == NULL)
    {
        cout<<"\nError Occurred!";
        return 0;
    }
    cout<<"\nEnter the Name of Target File: ";
    cin>>targetFile;
    ft = fopen(targetFile, "w");
    if(ft == NULL)
    {
        cout<<"\nError Occurred!";
        return 0;
    }
    ch = fgetc(fs);
    while(ch != EOF)
    {
        fputc(ch, ft);
        ch = fgetc(fs);
    }
    cout<<"\nFile copied successfully.";
    fclose(fs);
    fclose(ft);
    cout<<endl;
    return 0;
}
