#include "bits/stdc++.h"

using namespace std;
using i64 = long long;

void solve() {
    int n;
    cin >> n;

    int ans = 0;
    int pre = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans += (x - pre) / 120;
        pre = x;

        cout<<"ans: "<<ans<<endl;
    }
    ans += (1440 - pre) / 120;

    cout << (ans >= 2 ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
