#include<iostream>
using namespace std;

class calculate
{
    public:
    int side;
    int get_volume();    
};

int calculate::get_volume()
{
    return side*side*side;
}

int main()
{
    calculate c;
    cout<<"\n\nEnter the side of cube: "<<endl;
    cin>>c.side;
    cout<<"Volume of cube: "<<c.get_volume()<<endl;
    return 0;
}
