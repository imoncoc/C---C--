#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string res = "meow", ans = "YES";
    bool flag = true;
    int a = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    //cout<<"s: "<<s<<endl;
    for(ll i = 0; i < n; i++){
        if(s[i] == res[a]){
            a++;
        }
        else if(a != 0 && s[i] == res[a-1]){
            continue;
        }
        else{
            ans = "NO";
            break;
        }
    }


    if(s[a] == 'w' && ans == "YES"){
        ans = "Yes";
    }

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


