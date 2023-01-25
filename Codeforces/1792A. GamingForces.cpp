#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> a;
    int one = 0, other = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        a.push_back(x);
        if(x == 1) one++;
        else other++;
    }

    if(one <= 1) {
        cout<<n<<endl;
    }
    else{
        int ans = one / 2;
        if(one % 2 == 1){
            ans += (n - one) + 1;
        }
        else{
            ans += (n - one);
        }
        cout<<ans<<endl;
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

