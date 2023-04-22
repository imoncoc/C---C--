#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string s;
    cin>>s;
    int n = s.size();
    if(s[0] == '0'){
        cout<<0<<endl;
        return;
    }

     int ans = 1;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '?')
      {
        if (i == 0)
          ans *= 9;
        else
          ans *= 10;
      }
    }
    cout << ans << endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

