#include<iostream>
using namespace std;

struct Point
{
    double x;
    double y;

};
void print1(Point v)
{
        cout<<&v<<endl;
}

void print2(Point& v)
{
        cout<<&v<<endl;
}

int main()
{
    Point v;
    cin >> v.x >> v.y;
    cout<<&v<<endl;
    print1(v);
    print2(v);
}

