#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, p[3000], t = 0, a = 0, c = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> p[i];

	for (int i = 1; i <= n; ++i) {
            t = p[i];
    c = 1;
     while (t != -1) {
            ++c;
            t = p[t];
            }

     a = max(a, c); }

	cout << a;

}
int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

