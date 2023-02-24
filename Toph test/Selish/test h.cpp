#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<set<long long>> divisors(n);
    vector<map<long long, int>> divisor_indices(n);
    for (int i = n - 1; i >= 0; i--) {
        for (long long j = 1; j * j <= a[i]; j++) {
            if (a[i] % j == 0) {
                divisors[i].insert(j);
                divisors[i].insert(a[i] / j);
                if (j != 1 && i < n - 1 && divisors[i + 1].count(j)) {
                    divisors[i].insert(j);
                }
                if (a[i] / j != 1 && i < n - 1 && divisors[i + 1].count(a[i] / j)) {
                    divisors[i].insert(a[i] / j);
                }
            }
        }
        for (auto divisor : divisors[i]) {
            divisor_indices[i][divisor] = i;
        }
    }

    int max_index = -1, profit = 0;
    for (int i = 0; i < n; i++) {
        for (auto divisor : divisors[i]) {
            if (divisor_indices[i].count(divisor) && divisor_indices[i][divisor] >= i) {
                profit++;
                if (profit >= k && (max_index == -1 || i > max_index)) {
                    max_index = i;
                    break;
                }
            }
        }
    }

    cout << max_index + 1 << endl;
    return 0;
}
