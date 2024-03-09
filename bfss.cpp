#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];
int level[N];


void bfs(int u){
  queue<int> q;
  q.push(u);
  vis[u] = true;


  while(!q.empty()){

    int x = q.front();
  // cout<< x << ' ';
    q.pop();

    for(auto v : g[x]){
      if(!vis[v]){
        q.push(v);
        vis[v] = true;
        level[v] = level[x] + 1;
      }
    }

  }

}

int main(){
  int n, m; cin >> n >> m;
  for(int i = 0 ; i < m; i++){
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  bfs(1);

   for(int i = 1 ; i <= n; i++){
     cout << i <<" : "<< level[i] << endl;
   }
}
