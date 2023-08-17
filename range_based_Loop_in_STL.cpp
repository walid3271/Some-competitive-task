#include<bits/stdc++.h>
using namespace std;

///using range-based Loop in STL (pair).
int main()
{
    int N;
    cin>>N;
    vector<pair<int,int>> v;
    for(int i=0; i<N; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    for(pair<int,int> value : v)
        cout<<value.first<< " "<<value.second<<endl;

    return 0;
}




/*
///using range-based Loop in STL (vector).
int main()
{
    int N;
    cin>>N;
    vector<int> v;
    for(int i=0; i<N; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int &value : v)//using a reference to get the original value.
        value++;

    for(int value : v)
        cout<<value<< " ";
    return 0;
}
*/
