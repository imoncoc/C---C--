#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n = 12;
    int i;
    for(i = 0; i <= n/2; i++){
        if(i <= 5){
            i++;
        }
        else{
            break;
        }
    }
    cout<<i;
}
int main(){
    int t;
    t = 1;
    while(t--){
        solve();
    }


    return 0;
}

