#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    if(n == 3){
        cout<<"NO"<<endl;
    }
    else{
            cout<<"YES"<<endl;
            if(n % 2 == 0 ){
        for(int i = 0; i < n; i = i+2){
            cout<<1<<" "<<-1<<" ";
        }
            cout<<endl;
            }
    else{
            int x = n / 2;
        for(int i = 0; i < n-1; i = i+2){
            cout<<x-1<<" "<<-x<<" ";
        }
        cout<<x-1<<endl;
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

