#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;

    vector<pair<int, int>> adj[n+1];
    for(int i = 0; i < m; i++){
        int u, v, wt;
        cin>>u>>v>>wt;

        adj[u].push_back({v, wt});
        adj[u].push_back({u, wt});
    }



    return 0;
}
