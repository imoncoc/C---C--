#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string, int> mp;

    for(int i = 1; i < n; i++){
        string sub = "";
    sub += s[i-1];
    sub += s[i];
            mp[sub]++;
        //cout<<s[i-1]<<s[i]<<" ";
    }

    string ans = "";
    int count = INT_MIN;
    for(auto it: mp){
            if(it.second > count){
                count = it.second;
                ans = it.first;
            }
        //cout<<it.first<<" "<<it.second<<endl;
    }

    //cout<<"count: "<<count<<endl;
    //cout<<"ans: "<<ans<<endl;
    cout<<ans<<endl;
}
int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

