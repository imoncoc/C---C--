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

    bool ok = false;
    for(int i = 0; i < n-1; i++){
        for(int j = 1; j < n; j++){
            if( (__gcd(arr[i], arr[j])) <= 2){
                ok = true;
                break;
            }
        }
    }

    if(ok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

