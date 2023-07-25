#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, m;
    cin>>n>>m;
    ll tso = 0, ten = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        tso += x;
    }
    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        ten += x;
    }

    if(tso > ten){
        cout<<"Tsondu"<<endl;
    }
    else if(tso < ten){
        cout<<"Tenzing"<<endl;
    }
    else {
        cout<<"Draw"<<endl;
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

