#include<bits/stdc++.h>
using namespace std;


int main()
{
    map <pair<string,string>,vector<int>> m;

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;j++)
        {
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }

    for(auto &pr : m)
    {
        auto &full_name=pr.first;
        auto &liSt=pr.second;
        cout<<full_name.first<< " "<<full_name.second<<endl;
        cout<<liSt.size()<<endl;
        for(auto &ele : liSt)
            cout<<ele<< " ";
        cout<<endl;
    }
    return 0;
}
