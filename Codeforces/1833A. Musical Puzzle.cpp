#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<string> dex;

    for(int i = 0; i < n-1; i++){
        string temp;
        temp.push_back(s[i]);
        temp.push_back(s[i+1]);
        dex.insert(temp);
    }

    cout<<dex.size()<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

