#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(count(s.begin(), s.end(), 'R') == n || count(s.begin(), s.end(), 'L') == n){
        cout<<-1<<endl;
        return;
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        if( i+1 < n && s[i] == 'L' && s[i+1] == 'R'){
            ans = i+1;
            break;
        }
    }

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

