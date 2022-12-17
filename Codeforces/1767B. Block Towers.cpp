#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
        cin>>n;
        ll a[n];

        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        sort(a+1, a+n);

        for(int i = 1; i < n; i++)
        {
            if(a[i] > a[0]){
                if((a[i] + a[0]) % 2 == 0){
                    a[0] = (a[i] + a[0])/2;
                }else{
                    a[0] = (a[i] + a[0])/2+1;
                }
            }
        }

        cout<<a[0]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}
