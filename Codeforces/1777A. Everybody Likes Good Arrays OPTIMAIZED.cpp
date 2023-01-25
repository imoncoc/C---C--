#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int count = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int prev = arr[0] % 2;

    for(int i = 1; i < n; i++){
            int x = arr[i] % 2;
        if(prev == x){
            count++;
        }
        prev = x;
    }

    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}


