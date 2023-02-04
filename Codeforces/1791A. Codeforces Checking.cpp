#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string s = "codeforces";
    char c;
    cin>>c;
    bool flag = false;
    for(int i = 0; i < s.size(); i++){
        if(c == s[i]){
            flag = true;
            break;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

