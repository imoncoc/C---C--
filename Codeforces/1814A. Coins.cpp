#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
     ll n, m;
     cin >> n >> m;
     if (n % m == 0 || n % 2 == 0 || (n - m) % 2 == 0)
        cout << "YES"<<endl;
     else cout << "NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

