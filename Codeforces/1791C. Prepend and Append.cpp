#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l = 0, r = n-1;
    int ans = -1;

    while(1){
            //cout<<"l: "<<l<<" r: "<<r<<endl;
        if(l > r) break;
        if(s[l] == '0' && s[r] == '1'){
            l++;
            r--;
        }
        else if(s[l] == '1' && s[r] == '0'){
            l++;
            r--;
        }
    else{
        break;
    }
    }
    if(l > r){
        ans = 0;
    }
    if(ans != 0){
        ans = abs(l-r) + 1;
    }


    //cout<<"ans: "<<ans<<endl;
    //cout<<"l: "<<l<<" r: "<<r<<endl;
    //cout<<"last: "<<abs(l - r) +1<<endl;

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

