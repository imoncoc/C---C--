#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string s;
    getline(cin, s);
    //cout<<s<<endl;

    string res = "Ratul", ans = "";
    int a = 0;
    bool flag = false;

    for(int i = 0; i <s.size(); i++ ){
        if(s[i] == res[a]){
            ans += s[i];
            a++;

        }
        else {
            a = 0;
            ans = "";
        }

        if(ans == res){
                flag = true;
                if(i != s.size() - 1){
                   ans += s[i+1];
                }

            break;
        }
    }

    //cout<<ans<<endl;

    if(flag == true && (ans == "Ratul " || ans == "Ratul")){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
}
int main(){
    int t = 1;
    while(t--){
        solve();
    }


    return 0;
}

