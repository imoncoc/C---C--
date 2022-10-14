#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);


    for(int i = 0; i < n; i++) cin>>arr[i];
    if(n == 1){
        cout<<"YES"<<endl;
        return;
    }
    sort(arr.begin(), arr.end());

    for(int i = 0; i < n-1; i++){
        if(arr[i] >= arr[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

