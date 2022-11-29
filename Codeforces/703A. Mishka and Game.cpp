#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a = 0, b = 0;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		if (x < y) b++;
		if (x > y) a++;
	}
	if (a > b) cout << "Mishka\n";
	else if (a == b) cout << "Friendship is magic!^^\n";
	else cout << "Chris\n";
	return 0;
}
