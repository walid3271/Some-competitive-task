#include<bits/stdc++.h>
using namespace std;

///using iterator in vector.
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
    vector<int> :: iterator it;
    //it=v.begin();
    //cout<< (*it+1)<<endl;

    for(it=v.begin(); it!=v.end(); it++)
        cout<<(*it)<< " ";

    return 0;
}
