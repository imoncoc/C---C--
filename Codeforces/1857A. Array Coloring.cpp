#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;

    int odd = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(x % 2 != 0) {
            odd++;
        }
    }

    if(odd % 2 != 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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


