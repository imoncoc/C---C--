#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, d;
    string s;
    int flag = false;
	cin>>n>> d;
	cin >> s;
	s += '0';
	for (int i = 0; i < s.size() - 1; i ++)
	{
		if (!flag && s[i] - '0' < d) {
            cout << d, flag = 1;
		}
		cout << s[i];
	}
	if (!flag) cout << d;
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

