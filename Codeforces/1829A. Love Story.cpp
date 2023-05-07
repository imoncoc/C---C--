#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string res = "codeforces";
    string s;
    cin>>s;
    int cnt = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] != res[i]){
            cnt++;
        }
    }

    cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}


