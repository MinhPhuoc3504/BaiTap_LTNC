#include<iostream>
using namespace std;

struct Point
{
    double x;
    double y;
    void print()
    {
        cout<<x<<" "<<y;
    }
};

int main()
{
    Point v;
    cin>>v.x>>v.y;
    v.print();
}
