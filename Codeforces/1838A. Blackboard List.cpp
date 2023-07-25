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
    if(arr[0] < 0){
        cout<<arr[0]<<endl;
    }
    else{
        cout<<arr[n-1]<<endl;
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

