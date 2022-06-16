#include <iostream>
#include <conio.h>
using namespace std;

void except(int test)
{
    try 
    {
        if (test==0)
        throw 10;
        if (test==1)
        throw 'a'; 
        if (test==2)
        throw 123.23;
    }
    catch(int i) 
    {
        cout<< "Caught an exception in Integer i.e.  " << i << "\n"; 
    }
    
    catch(char) 
    {
        cout<< "Caught an exception in char type !!\n"; 
    }
    catch(...) 
    {
        cout<< "Caught a general exception !!\n"; 
    }
}

int main( ) 
{
    cout<<endl;
    cout<< "------------- Starting Exception Checking with the help of Tests --------------\n";
    cout<<endl;
    except(0);
    except(1);
    except(2);
    cout<<endl;
    cout<< "------------- Exception checking Done, End of program ----------------\n";
    cout<< "--------------        Program by 21BCS2588     ----------------";
    return 0;
}
