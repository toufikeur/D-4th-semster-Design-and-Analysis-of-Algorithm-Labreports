#include <bits/stdc++.h>
using namespace std;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
const int x = 100000;
vector<int> v[x];
int ar[x], low[x], in[x];
set<int> ans;
int timer;

void dfs(int node, int par)
{
    ar[node] = 1;
    in[node] = low[node] = timer++;
    int cnt = 0;
    for (int child : v[node])
    {
        if (child == par)
            continue;
        if (ar[child] == 1)
        {
            low[node] = min(low[node], in[child]);
        }
        else
        {
            dfs(child, node);
            cnt++;
            low[node] = min(low[node], low[child]);
            if (low[child] >= in[node] && par != -1)
            {
                ans.insert(node);
            }
        }
    }
    if (par == -1 && cnt > 1)
    {
        ans.insert(node);
    }
}
int main()
{
    int n, m, a, b;
    while (1)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        for (int i = 1; i <= n; i++)
        {
            v[i].clear();
            ar[i] = 0;
        }
        timer = 1;
        ans.clear();
        while (m--)
        {
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        for (int i = 1; i <= n; i++)
        {
            if (ar[i] == 0)
            {
                dfs(i, -1);
            }
        }
        cout << ans.size() << "ar found: ";
        for (auto it = ans.begin(); it != ans.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
