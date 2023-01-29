#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, s, r;
     cin >> n >> s >> r;
        int max_dice = (s - r + n - 2) / (n - 1);
        for (int i = 0; i < n - 1; i++) {
            cout << max_dice + (i < (s - r) % (n - 1)) << " ";
        }
        cout << max_dice + (s - r + n - 2) / (n - 1) << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

