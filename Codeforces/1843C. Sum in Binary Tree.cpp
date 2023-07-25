#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n,s=0;
	cin>>n;
	while(n!=0){

	    s+=n;
	    n/=2;
	}
	cout<<s<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

