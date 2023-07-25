#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());
    int res = n/2;
    int ans = 0;

    for(int i = 0; i < res; i++){
        ans += arr[n-i-1] - arr[i];
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

