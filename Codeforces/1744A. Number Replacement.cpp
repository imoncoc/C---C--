#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    string s;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cin>>s;

    map<int, set<char>> mp;

    for(int i = 0; i < n; i++){
        mp[arr[i]].insert(s[i]);
    }

     for(auto it: mp ){
        if(it.second.size() > 1){
            cout<<"NO"<<endl;
            return;
        }
     }

     cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

