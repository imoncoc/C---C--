#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long x, y, a, b;
    cin>>x>>y>>a>>b;
    long long total = 0;
    if(x > y){
        swap(x, y);
    }

    total += a * (y - x);

    if(2 * a < b){
        total += x * (2 * a);
    }
    else{
        total += x * (b);
    }

    cout<<total<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

