#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n), ans;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }



    for(int i = 0; i < n; i++){
            int x = arr[i] % 2;
        ans.push_back(x);
    }

    int count = 0;
    for(int i = 1; i < n; i++){
            if(ans[i-1] == ans[i]) count++;
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

