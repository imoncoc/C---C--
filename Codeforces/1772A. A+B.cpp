#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string s;
    cin>>s;
    int n = s.size();
    string sub = "";
    int ans = 0;

    for(int i = 0; i < n; i++){
            if(s[i] == '+'){
                ans = stoi(sub);
                sub = "";
            }
            else{
                sub += s[i];
            }

            //cout<<"sub: "<<sub<<endl;
    }


    ans += stoi(sub);

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

