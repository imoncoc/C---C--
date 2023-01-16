#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int cnt = count(a.begin(), a.end(), a[0]);
    if(cnt == n){
        cout<<"NO"<<endl;
    }
    else{
            cout<<"YES"<<endl;
        sort(a.begin(), a.end(), greater<int>());
            cout<<a[n-1]<<" ";
        for(int i = 0; i < n-1; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
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

