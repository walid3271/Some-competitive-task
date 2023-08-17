#include<bits/stdc++.h>
using namespace std;

///using iterator in pair.
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
    vector<pair<int,int>> :: iterator it;

    for(it=v.begin(); it!=v.end(); it++)
        cout<<it->first<< " "<<it->second<<endl;
    //cout<<(*it).first<< " "<<(*it).second<<endl;


    return 0;
}
