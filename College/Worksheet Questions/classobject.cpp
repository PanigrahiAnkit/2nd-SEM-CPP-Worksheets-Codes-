/*#include <iostream>
using namespace std;
class cube
{
    int side=3;
    public :
    void vol()
    {
        int cal;
        cal = side*side*side;
        cout<<"Volume is :"<<cal;
    }
};

int main()
{
    cube c1;
    c1.vol();

    return 0;
}
*/

#include <iostream>
using namespace std;
class cube
{
    int side=3;
    public :
    void vol();
};
void cube::vol()
{
    int cal;
        cal = side*side*side;
        cout<<"Volume is :"<<cal;
}
int main()
{
    cube c1;
    c1.vol();
    return 0;
}