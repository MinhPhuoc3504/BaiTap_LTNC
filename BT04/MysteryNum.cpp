#include<bits/stdc++.h>

using namespace std;

int dem[10005];

int main()
{
    int n;
    cin >> n;

    int a[n],b[n+1];
    int max=-10005;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        dem[a[i]]++;
        if(max<a[i])
            max=a[i];
    }
    for(int i=0;i<n+1;i++)
    {
        cin >> b[i];
        dem[b[i]]--;
    }
    for(int i=0;i<=max;i++)
    {
        if(dem[i]<0)
            cout<<i;
    }
    return 0;

}
