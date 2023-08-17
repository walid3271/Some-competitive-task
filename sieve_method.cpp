#include<bits/stdc++.h>
using namespace std;


int main()//sieve method
{
    int n;

    cin>>n;

    int arr[n];

    memset(arr,0,sizeof(arr));//At first I thought it was not prime in any number.

    arr[2]=1;//2 is Prime (1 for Prime & 0 for not prime).

    for(int i=3; i<=n; i+=2)//Odd numbers have the potential to be prime.
        arr[i]=1;

        int sq=sqrt(n);

    for(int i=3; i<=sq; i+=2)//Multiplying an odd number by an even number is an even number.
    {
        //if(arr[i]==1)
        //{
            for(int j=3; i*j<=n; j+=2)//Exclude the factors of odd prime numbers.
                arr[i*j]=0;
        //}
    }

    for(int k=2; k<=n; k++)
    {
        if(arr[k]==1)
            cout<<k<< " ";
    }
    return 0;
}
