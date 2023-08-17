#include<bits/stdc++.h>
using namespace std;

///divider (using own logic)
int main()
{
    int n,sq;
    cin>>n;
    sq=sqrt(n);

    for(int i=1; i<=sq; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i*j==n)
            {
                cout<< i << " * "<<j<<endl;
                break;
            }
        }
    }
    return 0;
}




///divider (from competitive programming)
/*
int main()
{
    int n,sq;
    cin>>n;
    sq=sqrt(n);

    for(int i=1; i<=sq; i++)
    {
        if(n%i==0)
        {
            cout<<i<< " ";
            if(sq*sq!=n && i!=sq)
            {
                cout<<n/i<<endl;
            }
        }
    }
    return 0;
}
*/
