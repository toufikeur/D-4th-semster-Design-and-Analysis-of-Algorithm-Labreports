#include <bits/stdc++.h>
using namespace std;

int n, e;
const int N = 1e5 + 10;
vector<int> g[N], gt[N];
vector<bool> vis(N);
stack<int> s;

void dfs2(int vertex)
{
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        if (vis[child])
            continue;
        dfs2(child);
    }
    // s.push(vertex);
}

void dfs(int vertex)
{
    vis[vertex] = true;
    for (int child : gt[vertex])
    {
        if (vis[child])
            continue;
        dfs(child);
    }
    s.push(vertex);
}

void solve()
{
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    for (int i = 0; i < n; i++)
    {
        if (vis[i])
            continue;
        dfs(i);
    }
    for (int i = 0; i < n; i++)
    {
        vis[i] = false;
        for (auto it : g[i])
        {
            gt[it].push_back(i);
        }
    }
    int scc = 0;
    while (!s.empty())
    {
        int a = s.top();
        s.pop();
        if (!vis[a])
        {
            scc++;
            dfs2(a);
        }
    }
    cout << scc << endl;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}