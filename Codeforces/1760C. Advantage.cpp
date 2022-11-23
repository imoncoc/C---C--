#include <bits/stdc++.h>
using namespace std;
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

    sort(res.begin(), res.end(), greater<int>());

    int max1 = res[0], max2 = res[1];

    for(int i = 0; i < n; i++){
        if(arr[i] != max1){
            cout<<arr[i] - max1<<" ";
        }
        else{
            cout<<arr[i] - max2<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

