#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s, ans = "NO";
    cin>>s;
    int a = 0, b = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == 'R') a++;
        else if(s[i] == 'L') a--;
        else if(s[i] == 'U') b++;
        else if(s[i] == 'D') b--;

        if(a == 1 && b == 1){
            ans = "YES";
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

