#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x, y;
    cin>>x>>y;
    if(x == 2 && y == 3){
        cout<<"YES"<<endl;
    }
    else
    if(x < y && x <= 3){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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

