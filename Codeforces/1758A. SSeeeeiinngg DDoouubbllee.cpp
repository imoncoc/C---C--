#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string s;
    cin>>s;
    int n = s.size();
    string left, right;

    for(int i = 0; i < n; i++){
        left += s[i];
        right += s[i];
    }

    reverse(right.begin(), right.end());
    left += right;

    cout<<left<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

