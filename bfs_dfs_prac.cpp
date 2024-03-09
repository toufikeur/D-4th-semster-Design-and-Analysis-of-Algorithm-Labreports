#include<bits/stdc++.h>
using namespace std;
const int n=10000;
vector<int>g[n];
int vis[n];

void dfs(int u)
{

cout<< u<<' ';
vis[u]=1;
for(int i=0;i<g[u].size();i++)
{
    if(vis[g[u][i]]==0)
    {
        dfs(g[u][i]);
    }
}
}
void bfs(int c)
{
    queue<int>q;
    q.push(c);
    vis[c]=1;
    while(!q.empty())
    {
        int x=q.front();
        cout<< x <<' ';
        q.pop();
    for(int i=0;i<g[x].size();i++)
    {
        if(vis[g[x][i]]==0)
        {
            q.push(g[x][i]);
            vis[g[x][i]]=1;
        }
    }
    }
}


int main()
{
    int n,m;
    cout<<"Enter the number of nodes and edges:";
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cout<<"Enter the value of edges:";
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cout<<"Enter the starting node value:";
    int s;
    cin>>s;
   //cout<<"BFS result:";
  //  bfs(s);
   cout<<"DFS result:";
    dfs(s);
}
