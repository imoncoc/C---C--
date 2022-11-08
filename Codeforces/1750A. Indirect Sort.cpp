#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string ans = "NO";

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;

        if(i == 0 && x  == 1){
            ans = "YES";
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

