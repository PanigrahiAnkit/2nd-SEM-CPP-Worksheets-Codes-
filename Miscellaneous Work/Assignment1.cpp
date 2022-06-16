#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct telerec
{
static const int NAME_SIZE = 21; // 20 + '\0'
static const int PHONE_SIZE = 14; // 13 + '\0'

char name[NAME_SIZE];
char phone[PHONE_SIZE]; // +112221234567 or just 1234567
};

// Binary file to store records
const char* FILENAME = "data.db";

// Menu constants
const int APPEND = 1;
const int FIND_PHONE_BY_NAME = 2;
const int FIND_NAME_BY_PHONE = 3;
const int QUIT = 4;

// Function prototypes

// Write record to binary file
void write(telerec& rec);

// Returns phone or empty string if not found
string findPhonesByName(string name);

// Returns name or empty string if not found
string findNameByPhone(string phone);

int main()
{
int option = 0;
while (option != QUIT)
{
cout << "1) Append record.\n";
cout << "2) Find Phone(s) by Name.\n";
cout << "3) Find Name by Phone.\n";
cout << "4) Quit\n\n";
cout << "Select option: ";

cin >> option;
cin.ignore(80, '\n'); // ignore new line char

cout << endl;

if (option == APPEND)
{
telerec rec;
cout << "Enter name: ";
cin.getline(rec.name, telerec::NAME_SIZE);
cout << "Enter phone: ";
cin.getline(rec.phone, telerec::PHONE_SIZE);
cout << endl;
write(rec);
}
else if (option == FIND_PHONE_BY_NAME)
{
char name[telerec::NAME_SIZE];
cout << "Enter name: ";
cin.getline(name, telerec::NAME_SIZE);

string phones = findPhonesByName(name);
if (!phones.empty())
cout << "Phone(s):" << phones << endl;
else
cout << "record not found" << endl;
cout << endl;
}
else if (option == FIND_NAME_BY_PHONE)
{
char phone[telerec::PHONE_SIZE];
cout << "Enter phone: ";
cin.getline(phone, telerec::PHONE_SIZE);
string name = findNameByPhone(phone);
if (!name.empty())
cout << "Name: " << name << endl;
else
cout << "record not found" << endl;
cout << endl;
}
}

return 0;
}

// Write record to binary file
void write(telerec& rec)
{
ofstream out(FILENAME, ios::binary | ios::app);
out.write((char*)&rec, sizeof(rec));
}

// Returns phone(s) or empty string if not found
string findPhonesByName(string name)
{
ifstream in(FILENAME, ios::binary);
telerec rec;
string phones;
while (in.read((char*)&rec, sizeof(rec)))
{
if (name == rec.name)
{
phones += " ";
phones += rec.phone;
}
}
return phones;
}

// Returns name or empty string if not found
string findNameByPhone(string phone)
{
ifstream in(FILENAME, ios::binary);
telerec rec;
while (in.read((char*)&rec, sizeof(rec)))
{
if (phone == rec.phone)
return rec.name;
}
return "";
}