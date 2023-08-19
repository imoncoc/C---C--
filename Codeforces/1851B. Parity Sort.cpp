#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr, res;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
        res.push_back(x);
    }

    sort(res.begin(), res.end());

    bool flag = false;
    for(int i = 0; i < n; i++){
        if( arr[i] % 2 != res[i] % 2 ){
            flag = true;
            break;
        }
    }

    if(flag){
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

