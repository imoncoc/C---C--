#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> arr, prefix;
    int sum = 0;

    for(int i = 0; i < n; i++){
            int x;
        cin>>x;
        sum += x;
        arr.push_back(x);
        prefix.push_back(sum);
    }

    /*
    for(int i = 0; i < n; i++){
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
    */

    ll ans = 0, high = 0;
    for(int i = 0; i < n; i++){
        ans = prefix[i];
        k--;

        if(k < 0){
            ans -= prefix[abs(k+1)];
        }
        high = max(ans, high);
        //cout<<"ans: "<<ans<<endl;
        //cout<<"k: "<<k<<endl;
    }
    //cout<<endl;


    //cout<<"high: "<<high<<endl;
    cout<<high<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

