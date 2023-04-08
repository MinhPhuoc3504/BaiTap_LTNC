#include<iostream>

using namespace std;
void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây
   cout << &x << endl;
}
void g(int yval)
{
   int y;
   // in địa chỉ của y tại đây
   cout << &y << endl;
}
int main()
{
   f(7); // 0x61fdec
   g(11); // 0x61fdec


   return 0;
}
