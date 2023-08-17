#include <bits/stdc++.h>
using namespace std;

///Sum of divisor.
typedef long long int ll;
int sod(int n)
{
    ll sod=1,sq=sqrt(n);
    for(int i=2; i<=sq; i++)
    {
        if(n%i==0)
        {
            ll res=1,p=1;
            while(n%i==0)
            {
                n/=i;
                p*=i;
                res+=p;
            }
            sod*=res;
        }
    }
    if(n!=1)
        return sod*=n+1;

    return sod;
}


int main()
{
    int n;
    cin>>n;
    cout<<sod(n)<<endl;
    return 0;
}

