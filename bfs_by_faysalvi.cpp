
#include<bits/stdc++.h>
using namespace std;
void generateGraph(vector<vector<int>>& graph, int v){
      int node, edge, x, flag = 1;
      while(flag){
        cout << "\nEnter 1 to enter data or 0 to exit : ";
        cin >> flag;
        if(flag == 0) break;
        cout << "Enter node and number of edge : ";
        cin >> node;
        cin >> edge;
        while(edge--){
            cin >> x;
            graph[node].emplace_back(x);
        }
      }
}
void bfs(vector<vector<int>>& graph, vector<bool>& visited, int curr){
        queue<int>q;
        q.push(curr);
        while(!q.empty()) {
            int vertice = q.front();
            q.pop();
            cout << vertice << " ";
            visited[vertice] = true;
            for(int i=0; i<graph[vertice].size(); i++) {
                    if(visited[graph[vertice][i]] == false){
                        q.push(graph[vertice][i]);
                        visited[graph[vertice][i]] = true;

                    }
            }

        }
}
void dfs(vector<vector<int>>& graph, vector<bool>& visited1, int curr){
    if(visited1[curr]) return;
    cout << curr << " ";
    visited1[curr] = true;
    for(int i=0; i<graph[curr].size(); i++) {
        dfs(graph,visited1,graph[curr][i]);
    }
}
int main() {
    int i, j, n, m, v = 7;
    cout << "Enter number of vertice : ";
    cin >> v;
    vector<vector<int>>graph(v);
    generateGraph(graph, v);
    vector<bool>visited(v,false);
   cout << "Enter start point : ";
   cin >> n;
 cout << "BFS\n";
    bfs(graph,visited,n);
    cout << "\ndfs\n";
    vector<bool>visited1(v,false);
    dfs(graph,visited1,n);
}
