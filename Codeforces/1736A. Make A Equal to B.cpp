#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr1(n), arr2(n);
    int count = 0;

    for(int i = 0; i < n; i++) cin>>arr1[i];
    for(int i = 0; i < n; i++) cin>>arr2[i];

    for(int i = 0; i < n; i++){
        if(arr1[i] == arr2[i]) count++;
    }

    if(count == n){
        cout<<0<<endl;
    }
    else{
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        count = 1;
        for(int i = 0; i < n; i++){
            if(arr1[i] != arr2[i]){
                count++;
            }
        }

        //cout<<"ans: "<<count<<endl;
        cout<<count<<endl;
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
