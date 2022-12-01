#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, f = 0;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 1; i < n; i = i+3){
          //cout<<s[i]<<" ";
    if(s[i] != s[i+1]){
        f = 1;
    }
    }



    if(f != 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

