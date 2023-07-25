#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int inf = 1e18;
void solve(){
    int n;
	cin >> n;

	map<int,int> used;
	for (int i = 0; i < n +1; i++) {
		used[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		used[a]++;
	}
	int mn = inf;
	int cnt = 0;
	for (auto it : used) {
		if (cnt == n) {
			cout << "YES" << endl;
			return;
		}
		if (mn < it.second) {
			cout << "NO" << endl;
			return;
		}
		mn = it.second;
		cnt += it.second;
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

