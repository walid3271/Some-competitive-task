#include<bits/stdc++.h>
using namespace std;

///using {vector<vector<int>> v }
void vec(vector <int> &v)
{
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<< " ";
    cout<<endl;
}

int main()
{
    int N;
    cin>>N;
    vector<vector<int>> v;
    for(int i=0; i<N; i++)
    {
        int n;
        cin>>n;
        vector <int> tmp;//create a temporary Victor.
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            tmp.push_back(x);
        }
        v.push_back(tmp);

    }
    for(int i=0; i<v.size(); i++)
        vec(v[i]);

    return 0;
}



/*
void vec(vector <int> &v)
{
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<< " ";
    cout<<endl;
}

int main()
{
    int N;
    cin>>N;
    vector<vector<int>> v;
    for(int i=0; i<N; i++)
    {
        int n;
        cin>>n;
        v.push_back(vector <int>());//create an empty Victor.
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }

    }
    for(int i=0; i<v.size(); i++)
        vec(v[i]);

    return 0;
}
*/
