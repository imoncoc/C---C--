#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans = 1;
    cin>>n;
	while(n--){
		int x;
		cin>>x;
		ans = max(ans, x);
		}

	cout<<ans<<endl;

    return 0;
}

