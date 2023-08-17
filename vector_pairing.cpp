#include<bits/stdc++.h>
using namespace std;

///vector pairing.
void vec(vector<pair<int,int>> &v)
{
    for(int i=0; i<v.size(); i++)
        cout<<v[i].first<< " "<<v[i].second<<endl;
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector <pair<int,int>> v;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        //v.push_back(make_pair(x,y));
    }

    vec(v);

    return 0;
}
