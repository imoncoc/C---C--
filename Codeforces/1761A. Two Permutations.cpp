#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, a,b;
    cin>>n>>a>>b;

    if( (n == a && b == a) || n-(a+b) >= 2  ){
        cout<<"YES"<<endl;
    }
    else {
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

