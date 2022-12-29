#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;

    /*
    for(int i = 0; i < n-2; i++){
            string sub = "";
                   sub += s[i];
                   sub += s[i+1];
        for(int j = i+2; j < n-1; j++){
                string res = "";
                       res += s[j];
                       res += s[j+1];
            //cout<<"sub: "<<sub<<" 2: "<<res<<endl;;
            if(res == sub){
                count++;
                break;
            }


        }
        if(count == 1) break;
    }
    */
    string ans = "NO";
    for(int i = 0; i < n-2; i++){
        for(int j = i+2; j < n-1; j++){
            if(s[i] == s[j] && s[j+1] == s[i+1]){
                ans = "YES";
                break;
            }
        }
    }
    cout<<ans<<endl;

    //if(count == 1) cout<<"YES"<<endl;
    //else cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

