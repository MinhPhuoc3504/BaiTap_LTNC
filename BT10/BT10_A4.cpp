#include<iostream>
using namespace std;

struct Point
{
    double x;
    double y;

};

int main()
{
    Point v;
    cin>>v.x>>v.y;
    cout<<&v<<endl<<&v.x<<" "<<&v.y<<endl;
}
