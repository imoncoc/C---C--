#include <bits/stdc++.h>
using namespace std;
void solve(){
    unsigned long long x;
    cin>>x;
    if(x < 15){
        cout<<"NO"<<endl;
    }
    else if(x % 14 >= 1 && x % 14 <= 6 ){
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

