#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b;
    cin>>a>>b;
    int ans = 0;
    if(b > a){
        ans = b - a;
    }
    else if( a == b || a % b == 0){
        ans = 0;
    }
    else{
         ans = b -  (a % b);
        //cout<<"ans : "<<ans<<endl;
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

