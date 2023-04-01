#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string ans = "NO";
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
    cin>>arr[i];
    if(i >= arr[i]-1){
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

