#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];

void dfs(int u) {
  cout << u << ' ';
  vis[u] = true;

  for(int i = 0; i < g[u].size(); i++){
    if (vis[ g[u][i] ] == 0) {
      dfs( g[u][i] );
    }
  }
}


int main() {
    cout << "Enter starting node : " ;
    int st; cin >> st;

  int n, m; cin >> n >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

    dfs(st);




  return 0;
}
