#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    string ans = "YES";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i = 1; i < n; i++){
        if(arr[i-1] == arr[i] || abs(arr[i-1] - arr[i]) == 1 ){
            continue;
        }
        else{
            ans = "NO";
            break;
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

