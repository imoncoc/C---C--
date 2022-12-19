#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin >> n;

		if (!(n % 7))
			cout << n << "\n";
		else
		{
			for (int i = 0; i < 9; i++)
				if (!((n / 10 * 10 + i) % 7))
				{
					cout << n / 10 * 10 + i << "\n";
					break;
				}
		}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

