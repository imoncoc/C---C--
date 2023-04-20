#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, k, count = 0;
    cin>>n>>k;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(5-x >= k){
            count++;
        }
    }

    cout<<count/3<<endl;
}
int main(){
    int t = 1;

    while(t--){
        solve();
    }


    return 0;
}


