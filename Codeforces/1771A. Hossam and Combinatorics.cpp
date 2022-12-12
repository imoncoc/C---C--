#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll min = *min_element(arr.begin(), arr.end());
    ll max = *max_element(arr.begin(), arr.end());
    ll count_min = count(arr.begin(), arr.end(), min);
    ll count_max = count(arr.begin(), arr.end(), max);

    if (min == max) {
        cout << 1LL * n * (n - 1) << '\n';
    } else {
        cout << 2LL * count_min * count_max << '\n';
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

