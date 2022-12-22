#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int k, n;
    cin>>k>>n;
	int a = 1, b = 0;
	while(k--){
	a += b;
	b ++;
	if(a+k<=n) cout<<a<<" ";
	else cout<<n-k<<" ";
	}
	cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

