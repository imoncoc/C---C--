#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>>n>>k;
    map<int, int> mpp;

    for(int i = 0; i < n; i++){
        int num;
        cin>>num;
        mpp[num]++;
    }

    int count = 0, ans = 0;

    for(auto i: mpp){
        count += i.second % 2;
        ans += i.second / 2 * 2;
    }

    ans += (count + 1) / 2;


    cout<<ans<<endl;

}
int main(){
    int t;
    t = 1;
    while(t--){
        solve();
    }


    return 0;
}


