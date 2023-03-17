#include<iostream>
using namespace std;

struct Point
{
    double x;
    double y;
};

Point mid_point(Point v1, Point v2)
{
    Point t;
    t.x = (v1.x+v2.x)/2;
    t.y = (v1.y+v2.y)/2;

    return t;
}

int main()
{
    Point v1,v2;
    cin>>v1.x>>v1.y;
    cin>>v2.x>>v2.y;
    Point t = mid_point(v1,v2);
    cout<<t.x<<" "<< t.y;
}

