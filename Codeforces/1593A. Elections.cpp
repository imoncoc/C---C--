#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int a, b, c;
    cin>>a>>b>>c;

    int maxi = max(a, max(b, c));

    if( a == maxi && (a != b || a != c) ){
            if(a == b || a == c){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
    }
    else{
        cout<<maxi-a + 1<<" ";
    }
    if( b == maxi ){
        if(b == c || b == a){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
    }
    else{
        cout<<maxi-b + 1<<" ";
    }
    if( c == maxi ){
        if(c == b || c == a){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
    }
    else{
        cout<<maxi - c + 1<<endl;
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

