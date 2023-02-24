#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

int z[2*MAXN];
char s[2*MAXN];
int n;

void z_function() {
    int l = 0, r = 0;
    for (int i = 1; i < n; i++) {
        if (i <= r) z[i] = min(z[i-l], r-i+1);
        while (i+z[i] < n && s[z[i]] == s[i+z[i]]) z[i]++;
        if (i+z[i]-1 > r) l = i, r = i+z[i]-1;
    }
}

int main() {
    while (scanf("%s", s) == 1) {
        int len = strlen(s);
        n = 2*len+1;
        for (int i = 0; i < len; i++) {
            s[2*i+1] = s[i];
            s[2*i+2] = '#';
        }
        s[0] = '#';
        z_function();
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (i%2 == 0) {
                ans += (z[i]/2);
            }
            else {
                ans += ((z[i]-1)/2);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
