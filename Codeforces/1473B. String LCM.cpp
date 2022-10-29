#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s, t;
    cin>>s>>t;
    if(s.size() == t.size()){
        if(s == t){
            cout<<s<<endl;
        }
        else
            cout<<-1<<endl;

        return;
    }

    if(s.size() > t.size()) swap(s, t);
    int n = s.size();
    int m = t.size();
    int l = (n*m) / __gcd(n,m);

    string ans = "";
        int k = 0;

        for(int i=0;i<l;i++){
            ans += (char)s[k];
            k++;
            k %= n;
        }
        k = 0;
        for(int i = 0; i < l; i++){
            if(ans[i] != t[k]){
                cout<<-1<<endl;;
                return;
            }
            k++;
            k%=m;
        }
        cout<<ans<<endl;;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

