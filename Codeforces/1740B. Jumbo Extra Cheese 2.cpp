#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    long long ans  = 0;
    vector<long long> heights;

    for(int i = 0; i < n; i++){
        long long a, b;
        cin>>a>>b;

        if(b > a) swap(a, b);
        ans += b;
        heights.push_back(a);
    }

    ans *= 2;
    sort(heights.begin(), heights.end());

    for(int i = 1; i < n; i++){
        ans += (heights[i] - heights[i-1]);
    }

    ans += heights[0] + heights[n-1];
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

