#include<bits/stdc++.h>
using namespace std;
const int N=1000;
 vector<char>g[N];

bool vis[N];

void bfs(char u)
{
    queue<char>q;
    q.push(u);
    vis[u-'A']=1;

    while(!q.empty())
    {
        char x=q.front();
        cout<< x <<' ';
        q.pop();
        for(auto i: g[x])
        {
            if(vis[i-'A']==false )
            {
                q.push(i);
                vis[i-'A']=1;
            }
        }
    }
}
int main()
{
    int n,m;
    cout<<"Enter vertex number:";
    cin>>n;
    cout<<"Enter edge number;";
    cin>>m;
    while(m--)
    {
        char x,y;
        cout<<"Enter vertexes:";
        cin>>x>>y;
        g[x].push_back(y);
    }
    for(int i=0;i<n;i++)
    {
        vis[i]=0;
    }
    cout<<"BFS";
    bfs('A');
}
