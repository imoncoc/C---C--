#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n = s.size();
    bool flag = false;
    string res = "";
    for(int i = 0; i < 50; i++){
        res += "Yes";
    }

    for(int i = 0; i < res.size(); i++){
        if( i+n-1 < res.size() && res.substr(i, n) == s ){
            flag = true;
            break;
        }
    }

    if(flag == true){
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

