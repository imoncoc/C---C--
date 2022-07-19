#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector<int> BFS(vector<int> adj[], int V){
    vector<int> bfs_Travesal;
    vector<bool> visited(V, false);

    for(int i = 0; i < V; i++){
        if(!visited[i]){
            queue<int> q;
            visited[i] = true;
            q.push(i);

            while(!q.empty()){
                int node = q.front();
                q.pop();
                bfs_Travesal.push_back(node);

                for(auto it: adj[node]){
                    if(!visited[it]){
                        q.push(it);
                        visited[it] = true;
                    }
                }
            }
        }
    }

    return bfs_Travesal;
}



void printGraph(vector<int> adj[], int V){
    for(int i = 0; i < V; i++){
        cout<<i<<" -> ";
        for(int j = 0; j < adj[i].size(); j++){
            cout<<adj[i][j];

            if(j != adj[i].size() - 1){
                cout<<", ";
            }
        }
        cout<<endl;
    }
}

void printAns(vector<int> ans){
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int V = 5;
    vector<int> adj[V];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    printGraph(adj, V);

    vector<int> ans = BFS(adj, V);
    printAns(ans);




    return 0;
}
