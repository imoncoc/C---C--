#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;

    // Declare the adjecent matrix
    int adj[n+1][m+1];

    // take edges as input
    for(int i = 0; i < m; i++){
        int u, v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }







    return 0;
}
