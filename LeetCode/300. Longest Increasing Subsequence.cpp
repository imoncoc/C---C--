#include<bits/stdc++.h>
using namespace std;
vector<int> AllPossibleStrings(vector<int> arr) {
	int n = arr.size();
	vector<int>ans;
	for (int num = 0; num < (1 << n); num++) {
		vector<int> sub;
		for (int i = 0; i < n; i++) {
			//check if the ith bit is set or not
			if (num & (1 << i)) {
				sub.push_back(arr[i]);
			}
		}
		if (sub.size() > 0) {
			ans.push_back(sub);
			sub.clear();
		}
	}
	sort(ans.begin(), ans.end());
	return ans;
}
int main()
{


	vector<int> arr = [10,9,2,5,3,7,101,18];
	vector<int>ans = AllPossibleStrings(s);
	//printint all the subsequence.
	cout<<"All possible subsequences are "<<endl;
	for (auto it : ans) {
		cout << it << " ";
	}

}
