#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag = true;

    for(int i = 0; i < n; i++){
            cout<<s[i]<<" ";
        if(s[i] == s[i+1] && i % 2 == 0){
            flag = false;
    break;
        }
    }

    if(flag == true){
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

