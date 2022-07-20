#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

class Solution{
    void dfs(int node, vector<int>&dfs_travesal, vector<bool>&visited, vector<int> adj[]){
        dfs_travesal.push_back(node);
        visited[node] = true;
        for(auto it: adj[node]){
            if(!visited[it]){
                dfs(it, dfs_travesal, visited, adj);
            }
        }
    }
public:
    vector<int>dfsOfGraph(vector<int> adj[], int V){
        vector<int> dfs_travesal;
        vector<bool> visited (V, false);
        for(int i = 0; i< V; i++){
            if(!visited[i]){
                dfs(i, dfs_travesal, visited, adj);
            }
        }
        return dfs_travesal;
    }
};

void printDFS(vector<int> DF){
    for(int i = 0; i < DF.size(); i++){
        cout<<DF[i]<<" ";
    }
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
int main(){
    int V = 8;
    vector<int> adj[V];

    addEdge(adj, 1, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 2, 7);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 6);
    addEdge(adj, 6, 7);

    printGraph(adj, V);

    Solution obj;
    vector<int> DF = obj.dfsOfGraph(adj, V);

    printDFS(DF);



    return 0;
}
