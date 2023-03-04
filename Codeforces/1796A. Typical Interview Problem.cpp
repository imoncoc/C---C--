#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s, ans = "YES";
    cin>>s;
    int f = 0, b = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'F'){
            f++;
            b = 0;
        }
        else if(s[i] == 'B'){
            b++;
            f = 0;
        }

        if(f == 3 || b == 2 || (i == 0 && s[i] == 'B')){
            ans = "NO";
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

