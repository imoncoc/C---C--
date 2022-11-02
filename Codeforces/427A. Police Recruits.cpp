#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n, t, r = 0, s = 0;
     cin>>n;

    for(int i = 1; i <= n; i++)
    {
        cin>>t;
        s = s + t;

        if(s<0)
        {
            s = 0;
            r++;
        }
    }

    cout<<r<<endl;


}
int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

