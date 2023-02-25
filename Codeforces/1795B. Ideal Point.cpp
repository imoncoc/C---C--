#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> gain(100, 0);

    for(int i = 1; i <= n; i++){
        int l, r;
        cin>>l>>r;
        if(l <= k && r >= k){
            gain[l]++;
            gain[r+1]--;
        }
    }

    for(int i = 1; i <= 51; i++){
        gain[i] += gain[i-1];
    }

    if(gain[k] > gain[k-1] && gain[k] > gain[k+1]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

