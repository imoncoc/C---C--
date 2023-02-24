#include <bits/stdc++.h>
using namespace std;
map<char, int> count_frequency(const string& str) {
    std::map<char, int> freq;
    for (char c : str) {
        freq[c]++;
    }
    return freq;
}

bool can_rearrange(const string& str, const string& target) {
    map<char, int> freq_str = count_frequency(str);
    map<char, int> freq_target = count_frequency(target);
    for (char c : target) {
        if (freq_str[c] < freq_target[c]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string str;
        cin >> str;
        map<char, int> freq_str = count_frequency(str);
        cout << "Case " << i << ": ";
        if (can_rearrange(str, "SELISE Digital Platforms")) {
            cout << "SELISE Digital Platforms";
        } else if (can_rearrange(str, "SELISE")) {
            cout << "SELISE";
        } else {
            cout << "NONE";
        }
        cout << endl;
    }
    return 0;
}
