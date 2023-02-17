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
    int count = 1, prev = arr[0], ans = 1;


    for(int i = 1; i < n; i++){
        if(prev == arr[i]){
            count++;
            prev = arr[i];
            ans = max(ans, count);
        }
        else if(prev != arr[i]){
                prev = arr[i];
            count = 1;
        }
    }
    cout<<"ans: "<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

