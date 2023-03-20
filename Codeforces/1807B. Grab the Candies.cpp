#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    ll a = 0, b = 0;

    for(int i = 0; i < n; i++ ){
        int x;
        cin>>x;
        if(x % 2 == 0){
            a += x;
        }
        else {
            b += x;
        }
    }

    if(a > b){
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

