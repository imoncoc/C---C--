#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    int ans = -1;
    for (int k = 0; k <= n; k++) { // k liars
      int truth = 0, lie = 0;
      for (int i = 1; i <= n; i++) {
        if (k >= a[i]) {
          truth++;
        }
        else {
          lie++;
        }
      }
      if (lie == k) {
        ans = k;
        break;
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

