#include<bits/stdc++.h>
using namespace std;

///auto keyword in STL.
int main()
{
    int N;
    cin>>N;
    vector<pair<int,int>> v;
    //vector<pair<int,int>> :: iterator it;//no need to declare this line when using the Auto keyword.
    for(int i=0; i<N; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    for(auto it=v.begin(); it<v.end(); it++)
        cout<<it->first<< " "<<it->second<<endl;

    for(auto &value : v)
        cout<<value.first<< " "<<value.second<<endl;

    return 0;
}


