#include <bits/stdc++.h>
using namespace std;
void solve(){
     long long k, n;
        cin>>n>>k;

        vector<int> a(n), b(k);

        for (long long i = 0; i < n; i++)
            cin >> a[i];


        for (long long i = 0; i < n; i++) {
            b[i % k] = max(b[i % k], a[i]);
        }


        long long s = 0;
        for (long long i = 0; i < k; i++)
            s += b[i];
        cout << s <<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

