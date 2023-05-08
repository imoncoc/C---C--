#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    int maxi = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(x == 0){
            cnt++;
            maxi = max(maxi, cnt);
        }
        if(x == 1){
            cnt = 0;
        }
    }


    cout<<maxi<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

