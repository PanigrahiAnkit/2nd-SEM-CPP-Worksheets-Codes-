#include <iostream>
using namespace std;
// frst name space
namespace frst_space {
void func() {
cout << "Inside frst_space" << endl;
}
}
// second name space
namespace second_space {
void func() {
cout << "Inside second_space" << endl;
}
}
int main () {
// Calls functon from frst name space.
frst_space::func();
// Calls functon from second name space.
second_space::func();
return 0;
