#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n = 8;
    string s[n];
    char c = '.';

    for(int i = 0; i < n; i++){
        cin>>s[i];
    }

    for(int i = 0; i < n; i++){
        if(count(s[i].begin(), s[i].end(), 'R') == n ){
            c = 'R';
            break;
        }
    }

    if(c == '.'){
        for(int j = n-1; j >= 0; j--){
            bool flag = false;

            for(int i = 0; i < n; i++){
                if(s[i][j] != 'B'){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                c = 'B';
                break;
            }
        }
    }

    cout<<c<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}
