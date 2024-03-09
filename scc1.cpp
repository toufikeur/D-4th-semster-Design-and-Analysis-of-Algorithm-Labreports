#include <bits/stdc++.h>
using namespace std;

int n, e;
const int N = 1e5 + 10;
vector<int> g[N], gt[N];
vector<bool> vis(N);
stack<int> s;

void dfs2(int vertex, set<int> &component)
{
    vis[vertex] = true;
    component.insert(vertex);
    for (int child : g[vertex])
    {
        if (!vis[child])
        {
            dfs2(child, component);
        }
    }
}

void dfs(int vertex)
{
    vis[vertex] = true;
    for (int child : gt[vertex])
    {
        if (!vis[child])
        {
            dfs(child);
        }
    }
    s.push(vertex);
}

void solve()
{
    int scc = 0;
    cin >> n >> e;
    vector<set<int>> stronglyConnectedComponents;

    for (int i = 1; i <= e; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        if (u == v)
            scc++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    fill(vis.begin(), vis.end(), false);

    while (!s.empty())
    {
        int a = s.top();
        s.pop();
        if (!vis[a])
        {
            set<int> component;
            dfs2(a, component);
            stronglyConnectedComponents.push_back(component);
            scc++;
        }
    }

    cout << "Number of Strongly Connected Components: " << scc << endl;
    cout << "Strongly Connected Components Sets:" << endl;
    for (const auto &component : stronglyConnectedComponents)
    {
        for (int node : component)
        {
            cout << node << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
