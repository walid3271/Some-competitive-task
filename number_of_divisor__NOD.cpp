#include <bits/stdc++.h>
using namespace std;



///Number of divisor.
typedef long long int ll;
int nod(int n)
{
    ll nod=1,sq=sqrt(n);
    for(int i=2; i<=sq; i++)
        if(n%i==0)
        {
            ll res=0;
            while(n%i==0)
            {
                n/=i;
                res++;
            }
            nod*=res+1;
        }
    if(n!=1)
        return nod*=2;
    return nod;
}

int main()
{
    int n;
    cin>>n;
    cout<<nod(n)<<endl;
    return 0;
}
