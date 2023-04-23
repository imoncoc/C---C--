#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll x,y;              cin>>x>>y;

      if(abs(x-y)==1){
         cout<<1<<endl;
         cout<<x<<" "<<y<<endl;
      }
      else{
         cout<<2<<endl;
         if(x+1LL>(ll)1e9){
            cout<<(x-1LL)<<" "<<1<<endl;
            cout<<x<<" "<<y<<endl;
         }
         else{
            cout<<(x+1LL)<<" "<<1<<endl;
            cout<<x<<" "<<y<<endl;
         }
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

