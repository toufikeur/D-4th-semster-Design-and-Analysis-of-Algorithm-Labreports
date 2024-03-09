#include<bits/stdc++.h>
using namespace std;
const int n=200;
vector<int>g[n];
int vis[n];

void bfs(int u)
{
   /*
        cout<<u<<' ';
        vis[u]=1;

        for(int i=0;i<g[u].size();i++)
        {
            if(vis[g[u][i]]==0)
            {
                dfs(g[u][i]);
            }
        }
        */

        cout<<u<<' ';
        vis[u]=1;;
            for(int i=0;i<g[u].size();i++)
            {
                if(vis[g[u][i]]==0)
                {
                    bfs(g[u][i]);
                }
            }

}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(0);
}
