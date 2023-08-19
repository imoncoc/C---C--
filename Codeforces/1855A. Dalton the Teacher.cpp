#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    int cnt = 0;

    for(int i = 1; i <= n; i++){
        int x;
        cin>>x;
        if(x == i){
            cnt++;
        }
    }

    if(cnt >= 2){
        cout<<(cnt+1)/2<<endl;
    }
    else{
        cout<<cnt<<endl;
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

