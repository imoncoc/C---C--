#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    string ans;
    int i = 0;
    while (i < s.size()) {
        int n = s[i] - '0';
        if (n >= 1 && n <= 9) {
            i++;
            string c;
            while (i < s.size() && islower(s[i])) {
                c += s[i];
                i++;
            }
            for (int j = 0; j < n; j++) {
                ans += c;
            }
        } else {
            ans += s[i];
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}
