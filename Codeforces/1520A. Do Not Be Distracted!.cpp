#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char, int> mp;
    int ans = 0;

    for(int i = 0; i < n; i++){
        mp[s[i]]++;
        char z = s[i];

        while(s[i] == z){
            i++;
        }
        i--;
        if(mp[z] > 1){
            ans = 1;
        }
    }

    if(ans == 1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

