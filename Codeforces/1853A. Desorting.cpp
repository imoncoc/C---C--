#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int prev = -1;
    bool flag = false;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(prev > arr[i]) flag = true;
        prev = arr[i];
    }

    if(flag){
        cout<<0<<endl;
        return;
    }

    prev = INT_MAX;
    for(int i = 0; i< n - 1; i++){
        int x = arr[i+1] - arr[i];
        if(x < prev){
            prev = x;
        }
    }

    //cout<<"prev: "<<prev<<endl;
    if(prev == 0){
        cout<<1<<endl;
    }
    else{
        //cout<<"ans: "<<(prev+2)/2<<endl;
        cout<<(prev+2)/2<<endl;
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

