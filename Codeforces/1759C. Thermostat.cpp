#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long l, r, x, a, b;
    cin>>l>>r>>x;
    cin>>a>>b;

    if(a == b){
        cout<<0<<endl;
        return;
    }
    if( abs(b - a) >= x ){
        cout<<1<<endl;
        return;
    }

    if(b > a){
        if( b+x <= r || a - x >= l ){
            cout<<2<<endl;
        }
        else if( a+x <= r && b - l >= x ){
            cout<<3<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        if( a+x <= r || b-x >= l ){
            cout<<2<<endl;
        }
        else if( a-x >= l && r-b >= x){
            cout<<3<<endl;
        }
        else{
            cout<<-1<<endl;
        }
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

