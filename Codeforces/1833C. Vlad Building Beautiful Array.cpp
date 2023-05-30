#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
		cin >> n;
		ll mn = INT_MAX;
		bool odd = 0, even = 0;
		for(ll i=0; i<n; i++) {
			ll x;
			cin >> x;
			mn = min(mn, x);
			if (x % 2 == 0) even = 1;
			else odd = 1;
		}

		cout << ((!even || !odd || (mn % 2 == 1))? "YES\n" : "NO\n");
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

