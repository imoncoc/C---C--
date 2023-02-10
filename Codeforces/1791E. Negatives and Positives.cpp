#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<ll> arr(n);
    ll neg = 0, ans = 0, mini = INT_MAX;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i] < 0){
            neg++;
        }
        ans += abs(arr[i]);
        mini = min(mini, abs(arr[i]));
    }

    //cout<<"neg: "<<neg<<endl;
    //cout<<"ans: "<<ans<<endl;
    //cout<<"mini: "<<mini<<endl;

    if(neg % 2 == 1){
        ans -= (2 * mini);
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

