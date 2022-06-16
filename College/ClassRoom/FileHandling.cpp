/* -------------------- File Handling -------------------- */

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ofstream f2;
//     // f2.open("file1.txt");
//     if(!f2)
//     {
//         cout<<"File has not been created";
//     }
//     else
//     {
//         cout<<"Your file is successfully created";
//     }
//     f2<<"Hello, this is a sample program\n";
//     //f2<<"Hello, this is a sample program\n";
//     f2<<"***WRITING TO  A FILE***\n";
//     f2<<"My name is Ankit and now I want to know whether it will open or not";
//     f2.close();
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     fstream Ankit_file;
//     Ankit_file.open("Ankit_file.txt");
//     if(!Ankit_file)
//     {
//         cout<<"File has not been created !";
//     }
//     else
//     cout<<"File has been successfully ! created";

// }



#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream f2;
    //f2.open("file1", ios :: in);
    //f2.open("file1", ios :: out);
    //f2.open("file1", ios :: app);
    //f2.open("file1", ios :: ate);
    f2.open("file1", ios :: trunc);
    //f2.open("file1", ios :: nocreate);
    // f2.open("file1", ios :: noreplace);
    if(!f2)
    {
        cout<<"File has not been created";
    }
    else
    {
        cout<<"Your file is successfully created";
    }
    f2<<"Hello, this is a sample program\n";
    f2<<"Hello, this is a sample program\n";
    f2<<"***WRITING TO  A FILE***\n";
    // f2<<"My name is Ankit and now I want to know whether it will open or not";
    f2.close();
    return 0;
}
