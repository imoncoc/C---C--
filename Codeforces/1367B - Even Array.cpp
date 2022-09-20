#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;

        if(x % 2 != i % 2 ){
            if(i % 2 == 0) even++;
            else odd++;
        }
    }

    if(even != odd){
        cout<<-1<<endl;
    }
    else{
        cout<<even<<endl;
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
