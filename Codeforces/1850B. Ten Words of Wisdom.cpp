#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    int ans = 0, res = 0;

    for(int i = 1; i <= n; i++){
        int a, b;
        cin>>a>>b;
        if(a <= 10){
            if(b > res){
                res = b;
                ans = i;
            }
        }
    }

    //cout<<"Ans: "<<ans<<endl;
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

