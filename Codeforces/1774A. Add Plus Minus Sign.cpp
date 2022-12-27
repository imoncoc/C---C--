#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s, ans;
    cin>>s;
    int count = 0;
    bool flag = true;

    for(int i = 0; i < n-1; i++){
            if(s[i] == '1') count++;
        if(s[i] == '1' && s[i+1] == '1' && flag == true){
            ans += '-';
            flag = false;
        }
        else if(s[i] == '1' && flag == false){
            ans += '+';
            flag = true;
        }
        else{
            ans += '+';
        }
    }

    if(count % 2 == 1 && s[n-1] == '1'){
        ans[ans.size()-1] = '-';
    }

    cout<<"count: "<<count<<endl;
    cout<<ans<<endl;

    /*
    int len = s.size();
    for(int i = 0; i < n; i++ ){
        if(s[i] == '1') count++;
    }

    if(count == 1){
        for(int i = 0; i < len-1; i++){
            ans += '+';
        }
    }
    else{
        for(int i = 0; i < len-1; i++){
            if(s[i] == '1' && flag){
                ans += '-';
                flag = false;
            }
            else if(s[i] == '1' && !flag){
                ans += '+';
                flag = true;
            }
            else{
                ans += '+';
            }
        }
    }

    cout<<ans<<endl;
    */
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

