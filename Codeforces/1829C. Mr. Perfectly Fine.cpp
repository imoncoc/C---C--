#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    int first = 10000000, last = 10000000, both = 10000000;
    for(int i = 0; i < n; i++){
        int x;
        string s;
        cin>>x>>s;
        if(s == "11"){
            both = min(both, x);
        }
        if(s == "10"){
            first = min(x, first);
        }
        if(s == "01"){
            last = min(x, last);
        }
    }

    int ans = min(both, (first + last) );
    if(ans >= 10000000 ){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    //cout<<"ans: "<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

