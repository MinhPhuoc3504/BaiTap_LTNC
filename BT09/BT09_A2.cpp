#include<iostream>
using namespace std;
int main()
{
    int* p = new int;
    *p = 10;
    int* p2 = p;
    delete p;
    *p2 = 100;
    cout << *p2;
    delete p2;

    return 0;
}
