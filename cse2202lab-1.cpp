#include<bits/stdc++.h>
using namespace std;
int const N=1000;
vector<int>g[N];
int  vis[N];

void dfs(int u)
{
    cout<<u<<' ';
    vis[u]=1;
    for(int i=0;i<g[u].size();i++)
    {

        if(vis[g[u][i]]==0)
        {

            dfs(g[u][i]);
        }
    }

}

int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(0);
}

