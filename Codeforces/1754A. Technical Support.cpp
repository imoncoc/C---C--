#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'Q'){
            count--;
        }
        else if(count < 0){
          count++;
        }
    }

    if(count < 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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

