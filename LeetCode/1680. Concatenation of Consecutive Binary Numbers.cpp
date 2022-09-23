#include<bits/stdc++.h>
using namespace std;
 int numberOfBits(int n) {
		  return log2(n) + 1;
    }

int main(){
    int n;
    cin>>n;
    long ans = 0, MOD = 1e9 + 7;

        for (int i = 1; i <= n; ++i) {
            int len = numberOfBits(i);
            ans = ((ans << len) % MOD + i) % MOD;
        }

        cout<<ans<<endl;




    return 0;
}
