#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int n,e;
vector<int>g[N];
vector<int>gt[N];
vector<bool>vis(N);
stack<int>s;

void dfs2(int vertex)
{
    vis[vertex] = true;
    for(int child : g[vertex])
    {
        if(vis[child])
        continue;
        dfs2(child);
    }
}
void dfs(int vertex)
{
    vis[vertex] = true;
    for(int child : gt[vertex])
    {
        if(vis[child])
        continue;
        dfs(child);
    }
    s.push(vertex);
}

void solve()
{
    int n,e;
    cin >> n >> e;
    for(int i = 0; i <e; i++)
    {
        int u,v;
        cin >> u >> v >>
        g[u].push_back(v);

    }
    for(int i = 0; i<n; i++)
    {
        if(vis[i])
        continue;
        dfs(i);
    }
    for(int i = 0; i<n; i++)
    {
        vis[i]=false;
        for(auto its :g[i])
        {
            gt[its].push_back(i);
        }
    }
    int scc=0;
    while(!s.empty())
    {
        int a=s.top();
        s.pop();
        if(!vis[a])
        {
            scc++;
            dfs2[a];
        }
    }
    cout<<scc<<endl;
}

int main()
{
    int t=1;
    while (t--)
    {
        solve();
    }
    
}
