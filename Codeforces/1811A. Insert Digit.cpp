#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    char d;
    cin>>n>>d;
    string s, ans = "";
    cin>>s;
    bool flag = true;
    if( d == '0'){
            ans += s;
            ans += d;
    }
    else{
            reverse(s.begin(), s.end());
        for(int i = 0; i < n; i++){
            if(s[i] > d){
                ans += s[i];
            }
            else if(s[i] == d && flag == true){
                ans += d;
                ans += s[i];
                flag = false;
                //cout<<"first"<<endl;
            }
            else if(s[i] < d && i != n && flag == true){
                ans += d;
                ans += s[i];
                flag = false;
                //cout<<"second"<<endl;
            }
            else{
                ans += s[i];
            }
        }
    }
    reverse(ans.begin(), ans.end());


    cout<<"ans: "<<ans<<endl;
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

