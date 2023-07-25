#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
     int n;
      string s;
        cin >> n >> s;
        string ans;
        char pre = s[0];
        for (int i = 1; i < n; ++i) {
            if (s[i] == pre) {
                ans += pre;
                pre = s[i + 1];
                ++i;
            }
        }
        cout << ans << '\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

