#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
	cin >> n;
	std::vector<string> v;
	for(int i = 1; i <= 2 * n - 2; i++)
	{
		string s;
		cin >> s;
		if(s.size() == n - 1) v.push_back(s);
	}
	string t = v[1];
	reverse(t.rbegin(), t.rend());
	if(v[0] == t) cout << "YES" << "\n";
	else cout << "NO" << "\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

