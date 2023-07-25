#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    string st = "NO";

    if(a + b >= 10 || a + c >= 10 || b+c >= 10){
        st = "YES";
    }

    cout<<st<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

