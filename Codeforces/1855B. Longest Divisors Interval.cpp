#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;
    int i = 1;
    int cnt = 0;
    while(n % i == 0){
        cnt++;
        i++;
    }

    cout<<cnt<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

