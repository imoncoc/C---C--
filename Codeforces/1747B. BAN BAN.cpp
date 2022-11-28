#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s = "#";

    for(int i = 0; i < n; i++){
        s += "BAN";
    }

    vector<pair<int, int>> ans;
    int len = s.size() - 1;
    int left = 2, right = len;
    while(left < right){
        ans.push_back({left, right});
        swap(s[left], s[right]);
        left += 3;
        right -= 3;
    }

    cout<<ans.size()<<endl;
    for(auto it: ans){
        cout<<it.first<<" "<<it.second<<endl;
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

