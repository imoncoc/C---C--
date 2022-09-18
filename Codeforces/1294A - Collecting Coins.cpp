#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int maxi = max(a, max(b, c));
        int res = (maxi - a) + (maxi - b)+ (maxi - c);
        int ans = n - res;
        //cout<<"res "<<res<<endl;
        //cout<<"ans "<<ans<<endl;

        if(ans >= 0 && ans % 3 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
     }







    return 0;
}
