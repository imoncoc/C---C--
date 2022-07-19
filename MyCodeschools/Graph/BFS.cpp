#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int> bfs_traversal;
    vector<bool> vis(V, false);
    for (int i = 0; i < V; ++i) {
        if (!vis[i]) {
            queue<int> q;
            vis[i] = true;
            q.push(i);
            while (!q.empty()) {
                int g_node = q.front();
                q.pop();
                bfs_traversal.push_back(g_node);
                for (auto it : adj[g_node]) {
                    if (!vis[it]) {
                        vis[it] = true;
                        q.push(it);
                    }
                }
            }
        }
    }
    return bfs_traversal;
}

void printGraph(vector<int> adj[], int V){
    for(int i = 0; i < V; i++){
        cout<<i<<" -> ";
        for(int j = 0; j < adj[i].size(); j++){
            cout<<adj[i][j];
            if(j != adj[i].size() -1 ){
                cout<<", ";
            }
        }
        cout<<endl;
    }
}


void printAns(vector < int > & ans) {
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
}

int main(){
    int V = 5;
    vector <int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 3, 2);
    addEdge(adj, 3, 4);
    addEdge(adj, 4, 2);

    printGraph(adj, V);

    vector < int > ans = bfsOfGraph(5, adj);

    cout<<endl;
    printAns(ans);
    cout<<endl;






    return 0;
}

