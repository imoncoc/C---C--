#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, r;
    cin>>n>>r;
    long long ans = 1, a = n;

    while(1){
        if(n % 10 == r || n % 10 == 0){
            cout<<ans<<endl;
            break;
        }
        else{
            n += a;
            ans++;
           // cout<<"n: "<<n<<endl;
        }
    }

}
int main(){
    solve();


    return 0;
}

