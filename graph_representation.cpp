#include<bits/stdc++.h>
using namespace std;


//competitive programming
int visited[110],level[110];
vector <int> G[110];

void zero(int);
void bfs(int);
void printgraph(vector <int> G[],int);

int main()
{
    int nodes,edges,source,a,b;
    while(cin>>nodes>>edges)
    {
        zero(nodes);

        for(int i=1; i<=edges; i++)
        {
            cin>>a>>b;
            G[a].push_back(b);
            G[b].push_back(a);
        }

        cin>>source;

        cout<<endl;
        printgraph(G,10);

        cout<<endl;
        bfs(source);

        for(int i=1; i<=nodes; i++)
        {
            cout<< "Level "<<i<< "="<<level[i]<<endl;
        }
        cout<<endl;
    }
    return 0;
}

void zero(int nodes)
{
    for(int i=0; i<=nodes; i++)
    {
        visited[i]=0,level[i]=0;
        G[i].clear();
    }
}

void printgraph(vector <int> G[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<i<< " -> ";
        for(int j=0; j<G[i].size(); j++)
        {
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }
}

void bfs(int source)
{
    level[source]=0;
    visited[source]=1;
    queue <int> Q;
    Q.push(source);

    while(!Q.empty())
    {
        source=Q.front();

        for(int i=0; i< G[source].size() ; i++)
        {
            int v=G[source][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                level[v]=level[source]+1;
                Q.push(v);
            }
        }
        Q.pop();
    }
}
