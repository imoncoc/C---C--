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

    for(int i = 0; i < n; i++){
        if(arr[i] % 10 == 0){
            cout<<arr[i]<<endl;
        }
        else{
            cout<<arr[i] % 10<<endl;
        }
    }
}
int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

