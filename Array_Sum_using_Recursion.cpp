#include <bits/stdc++.h>
using namespace std;

int sum(int n,int a[])
{
    if(n==0)
        return 0;
    return a[n]+sum(n-1,a);
}

int main()
{
    int x;
    cin>>x;
    int a[x];
    for(int i=1; i<=x; i++)
        cin>>a[i];

    cout<<sum(x,a);
    return 0;
}

