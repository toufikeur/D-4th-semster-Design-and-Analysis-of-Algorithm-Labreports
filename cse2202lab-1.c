#include<bits/stdc++.h>
using namespace std;
int const N=1000;
vector<int>g[N];
int vis[N];

void bfs(int u)
{
    queue<int>q;
    q.push(u);
    vis[u]=1;
    while(!q.empty())
    {

        int x =q.front();
        cout<<x<<' ';
        q.pop();
        for(int i=0;i<g[x].size();i++)
        {

            if(vis[[x][i]]==0)
            {

                q.push(g[x][i]);
                vis[[x][i]]=1;
            }
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
    bfs(0);
}
