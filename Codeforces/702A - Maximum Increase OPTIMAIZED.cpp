#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
	cin >> n;

	int count = 0;
	int maxCount = 0;
	int last = -1;
	for (int i = 0; i < n; i++){
		int a;
		cin >> a;
		if (a > last) {
			count++;
		}
		else {
			maxCount = max(maxCount, count);
			count = 1;
		}
		last = a;
	}
	maxCount = max(maxCount, count);
	cout << maxCount << endl;
	return 0;
}
