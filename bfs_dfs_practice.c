#include<bits/stdc++.h>
using namespace std;
vector<int >g;
const N =1000;
int vis[N];

void bfs(int u)
{
    queue<int>q;
    q.push(u);
    vis[u]=1;
    while(!q.empty())
    {
        int x=q.front();
        cout<< x <<' ';
        q.pop();
    for(int i=0;i<g[x].size().i++)
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
    cin>>n>>m;
    for(int i=0;i<m; i++)
    {
        int x,y;
        cin>>x>>y;
        q[x].push_back(y);
        q[y].push_back(x);

    }
    bfs(0);

}
