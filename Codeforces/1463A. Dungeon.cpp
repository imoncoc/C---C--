#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    int sum = a + b + c;
    int k = (a+b+c) / 9;

    if(sum % 9 == 0 && a >= k && b >= k && c >= k ){
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

