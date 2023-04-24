#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int a, b;
    cin>>a>>b;
        int ans = 0,index,c = 0;
        for(int i = a; i <= min(a+100, b); i++){
            int mx = 0, mn = INT_MAX, k = i;
            index = 0;
            while(k){
                mn = min(k%10, mn);
                mx = max(k%10, mx);
                k /=10;
            }

            index = mx - mn;
            if(index >= c){
                c = index;
                ans = i;
            }
        }
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

