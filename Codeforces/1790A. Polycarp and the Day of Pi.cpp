#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string s;
    string res = "314159265358979323846264338327";
    cin>>s;
    int n = s.size(), count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == res[i]) count++;
        else{
            break;
        }
    }

    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

