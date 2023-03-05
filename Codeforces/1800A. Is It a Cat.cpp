#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string res = "meow";
    string st;

    for(int i = 0; i < n; i++){
        if(s[i] <= 90) {
            s[i] += 32;
        }
    }

    for(int i = 0; i < n; i++){
        if(st.empty() || st.back() != s[i] ){
            st.push_back(s[i]);
        }
    }

    if(st == res){
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


