#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, m, k;
    cin>>n>>m>>k;

    float card = n/k;

    if(card >= m ){
        cout<<m<<endl;
    }
    else{
        cout<<card - ceil ((m - card)/(k-1) )<<endl;
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

