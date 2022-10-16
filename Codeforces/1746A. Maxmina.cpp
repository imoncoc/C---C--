#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> nums(n);
    string ans = "NO";

    for(int i = 0; i < n; i++){
        cin>>nums[i];

        if(nums[i] == 1){
            ans = "YES";
        }
    }

    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

