#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
#define ll long long int
void solve(){
    string s;
    cin.sync();
    getline(cin, s);


    //cout<<"s: "<<s<<endl;
    string selish = "EEILSS";
    string selishPlatform = "  DEEILPSSaafgiillmorstt";
    string bboth = "   DEEEEIILLPSSSSaafgiillmorstt";

    sort(s.begin(), s.end());
    //cout<<"sort S: "<<s<<endl;
    string ans = "NONE";

    int a = 0;
    for( int i = 0; i < selish.size(); i++){
        if(selish[a] == s[i]){
            a++;
        }
    }
    if(a == selish.size()){
        ans = "SELISE";
    }


    if(s.size() >= selishPlatform.size()){
        int b = 0;
    for( int i = 0; i < selishPlatform.size(); i++){
        if(selishPlatform[b] == s[i]){
            b++;
        }
    }
    if(b == selishPlatform.size()){
        ans = "SELISE Digital Platforms";
    }
    }



    if(s.size() >= bboth.size()){
        int c = 0;
    for( int i = 0; i < bboth.size(); i++){
        if(bboth[c] == s[i]){
            c++;
        }
    }
    if(c == bboth.size()){
        ans = "BOTH";
    }
    }

    cnt++;
    cout<<"Case "<<cnt<<": "<<ans<<endl;


}
int main(){
int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}



