#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e7;
bool arr[mxN+1];
vector <int> prime;
///prime factorization using the sieve (Using its own sieve logic)

void sieve()
{
    memset(arr,0,sizeof(arr));//At first I thought it was not prime in any number.

    arr[2]=1;//2 is Prime.

    for(int i=3; i<=mxN; i+=2)//Odd numbers have the potential to be prime.
        arr[i]=1;

    int sq=sqrt(mxN);

    for(int i=3; i<=sq; i+=2)//Multiplying an odd number by an even number is an even number.
    {
        if(arr[i]==1)
        {
            for(int j=3; i*j<=mxN; j+=2)//Exclude the factors of odd prime numbers
                arr[i*j]=0;
        }
    }

    prime.push_back(2);
    for(int i=3; i<=mxN; i+=2)
    {
        if(arr[i]==1)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    sieve();


    int n,sq;
    cin>>n;
    sq=sqrt(n);

    for(int i=0; prime.size() && prime[i]<=sq; i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
                cout<<prime[i]<< " ";
            }
        }
    }

    if(n!=1)
        cout<<n<< " ";
    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e7;
bool isp[mxN+1];
vector <int> prime;
///prime factorization using the sieve (from competitive class)

void sieve()
{
    memset(isp,0,sizeof(isp));
    isp[0]=isp[1]=1;
    for(int i=4;i<mxN;i++)
        isp[i]=1;

    int sq=sqrt(mxN);
    for(int i=3;i<=sq;i+=2)
    {
        if(isp[i]==0)
        {
            for(int j=i*i;j<mxN;j+=i+i)
                isp[j]=1;
        }
    }
    prime.push_back(2);
    for(int i=3;i<=mxN;i+=2)
    {
        if(isp[i]==0)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    sieve();
    int n,sq;
    cin>>n;
    sq=sqrt(n);

    for(int i=0;prime.size() && prime[i]<=sq;i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
                cout<<prime[i]<< " ";
            }
        }
    }

    if(n!=1)
        cout<<n<< " ";
    return 0;
}
*/
