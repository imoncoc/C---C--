#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, cur, mx=0;
    cin >> n;
    vector<long long> a(100001, 0);
    while (n--) {
        cin >> cur;
        a[cur] += cur;
        mx = max(mx, cur);
    }
    int i;
    for (i = 2; i <= mx; i += 1) {
         a[i] = max(a[i - 1], a[i] + a[i - 2]);
    }
    cout << a[i - 1];


    return 0;
}
