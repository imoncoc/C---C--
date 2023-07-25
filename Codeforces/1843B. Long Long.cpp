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

    ll sum = 0, op = 0;
    bool flag = false;

    for(int i = 0; i <= n; i++){
        if(i < n){
            sum += abs(arr[i]);
        }
        if(flag){
            if(i == n || arr[i] > 0){
                op++;
                flag = false;
            }
        }
        else if(arr[i] < 0){
            flag = true;
        }
    }

    cout<<sum<<" "<<op<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

