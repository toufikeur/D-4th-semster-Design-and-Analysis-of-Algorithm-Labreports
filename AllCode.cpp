1.Dijkstra:
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pi> vp;
typedef vector<pl> vpl;

const ll inf = 10000000000000ll;

vector<pair<int, int>> e[100000];
vector<int> shortestPath;
set<pair<ll, int>> s;

ll d[100000];
int p[100000];

int main()
{
    int n, m;
    cout<<"Enter the number of vertices and Edges:";
    cin >> n >> m;
    cout<<"Enter start_nodes,dis-nodes,values:"<<endl;
    for (int i = 0; i < m; ++i)
    {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        v1--;
        v2--;
        e[v1].push_back(make_pair(v2, w));
        e[v2].push_back(make_pair(v1, w));
    }

    for (int i = 0; i < n; ++i)
        d[i] = inf;
    d[0] = 0;

    s.insert(make_pair(d[0], 0));
    while (!s.empty())
    {
        int v = s.begin()->second;
        s.erase(s.begin());
        for (int i = 0; i < (int)e[v].size(); ++i)
        {
            int prvi = e[v][i].first;
            int w = e[v][i].second;

            if (d[v] + w < d[prvi])
            {
                s.erase(make_pair(d[prvi], prvi));
                d[prvi] = d[v] + w;
                p[prvi] = v;
                s.insert(make_pair(d[prvi], prvi));
            }
        }
    }
    if (d[n - 1] == inf)
        cout << -1;
    else
    {
        int c = n - 1;
        while (c != 0)
        {
            shortestPath.push_back(c + 1);
            c = p[c];
        }

        shortestPath.push_back(1);

        // Output shortest path
        cout << "Shortest Path: ";
        for (int i = shortestPath.size() - 1; i >= 0; --i){
            cout << shortestPath[i];
            if( i>0){
                cout<<"->";
            }
        }
        // Output total path cost
        cout << "\nTotal Path Cost: " << d[n - 1] << endl;
    }

    return 0;
}
2.Zero One knapsack
code:
#include<bits/stdc++.h>
using namespace std;

pair<int, vector<int>> knapsack(int W, int wt[], int val[], int n) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    vector<vector<bool>> selected(n + 1, vector<bool>(W + 1, false));

    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            if (wt[i - 1] <= w) {
                int include = val[i - 1] + dp[i - 1][w - wt[i - 1]];
                int exclude = dp[i - 1][w];

                if (include > exclude) {
                    dp[i][w] = include;
                    selected[i][w] = true;
                } else {
                    dp[i][w] = exclude;
                    selected[i][w] = false;
                }
            } else {
                dp[i][w] = dp[i - 1][w];
                selected[i][w] = false;
            }
        }
    }

    // Reconstruct the selected items
    int i = n, w = W;
    vector<int> selectedItems;
    while (i > 0 && w > 0) {
        if (selected[i][w]) {
            selectedItems.push_back(i - 1);
            w -= wt[i - 1];
        }
        i--;
    }

    reverse(selectedItems.begin(), selectedItems.end());
    return {dp[n][W], selectedItems};
}

int main() {
    int n; // number of items
    cout << "Enter the number of items: ";
    cin >> n;

    int val[n], wt[n]; // values and weights of items
    cout << "Enter the values of items: ";
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    cout << "Enter the weights of items: ";
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    int W; // capacity of the knapsack
    cout << "Enter the capacity of the knapsack: ";
    cin >> W;

    pair<int, vector<int>> result = knapsack(W, wt, val, n);

    cout << "Maximum value that can be obtained is: " << result.first << endl;

    cout << "The selected items are: ";
    for (int item : result.second) {
        cout << item+1 << " ";
    }
    cout << endl;

    return 0;
}

3.Articulation Point
code:
#include <bits/stdc++.h>
using namespace std;

//#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
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
        cout<<"Enter the number of vertices and edges:";
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
        cout<<"Enter connected nodes:"<<endl;
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
        cout << ans.size() << " articulation point found at node: ";
        for (auto it = ans.begin(); it != ans.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}

4.LCS
code:
#include <bits/stdc++.h>

using namespace std;

int lcs(string s1, string s2, int n, int m)
{
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int i = n, j = m;
    string s = "";
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            s.push_back(s1[i - 1]);
            i--;
            j--;
        }
        else
        {
            if (dp[i - 1][j] > dp[i][j - 1])
                i--;
            else
                j--;
        }
    }
    reverse(s.begin(), s.end());
    cout<< dp[n][m];
    cout << endl<< "LCS: " << s << endl;
    return dp[n][m];
}

int main()
{
    string s1, s2;
    cout << "Enter the first string" << endl;
    cin >> s1;
    cout << "Enter the second string" << endl;
    cin >> s2;
    int n = s1.length(), m = s2.length();
    cout << endl
         << "The length of longest common subsequence: " << lcs(s1, s2, n, m) << endl
         << endl;
}

5.SCC
code:

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
    cout<<"Enter the number of vertices and Edges:";
    cin >> n >> e;
    vector<set<int>> stronglyConnectedComponents;

    cout<<"Enter connected vertices:"<<endl;
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
    while (t--)
    {
        solve();
    }

    return 0;
}

6.2.BFS
code:
#include<bits/stdc++.h> 
using namespace std; 
const int n=10000; 
vector<int>g[n]; 
int vis[n]; 
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
 cout<<"BFS result:"; 
 bfs(s); 
}


6.1.DFS
code:
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
 cout<<"DFS result:"; 
 dfs(s); 
}