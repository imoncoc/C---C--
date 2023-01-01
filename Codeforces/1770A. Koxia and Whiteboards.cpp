#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, m;
    cin>>n>>m;
    ll sum = 0;
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        pq.push(temp);
    }

    for(int i = 0; i < m; i++){
        int temp;
        cin>>temp;
        pq.pop();
        pq.push(temp);
    }

    while(!pq.empty()){
        sum += pq.top();
        pq.pop();
    }

    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

