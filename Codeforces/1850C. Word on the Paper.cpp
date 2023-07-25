#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string s;
    for(int i = 0; i < 8; i++){
            char c;
        for(int j = 0; j < 8; j++){
            cin>>c;
            if(c != '.'){
                s += c;
            }
        }
    }

    cout<<s<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

