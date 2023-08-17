#include<bits/stdc++.h>
using namespace std;

void maph(map<int,string> M)
{
    cout<< "Size -> "<<M.size()<<endl;
    /*
    map<int,string> :: iterator it;
    for(it=M.begin();it!=M.end();it++)
    {
        cout<<(*it).first<< " "<<(*it).second<<endl;
    }
    */
    for(auto &pr : M)
        cout<<pr.first<< " "<<pr.second<<endl;

}

int main()
{
    map<int,string> M;
    for(int i=1; i<=5; i++)
    {
        int x;
        string s;
        cin>>x>>s;
        //M[x]=s;
        M.insert({x,s});
    }
    cout<<endl;

    maph(M);


    /*
    auto it=M.find(6);//to find a specific data.
    if(it==M.end())
        cout<< "NO Value."<<endl;
    else
        cout<<it->first<< " "<<it->second<<endl;
    */
    //if(3=M.end())
    //M.erase(3);//for erasing the specific key value

    return 0;
}
/*
3 al
5 nizhu
1 munsi
4 hassan
2 walid
*/
