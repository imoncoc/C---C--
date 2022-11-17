#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    if( (arr[n-3] + arr[n-2]) <= arr[n-1] ){
            //cout<<"arr[n-3]: "<<arr[n-3]<<endl;
            //cout<<"arr[n-2]: "<<arr[n-2]<<endl;
            //cout<<"arr[n-1]: "<<arr[n-1]<<endl;
        cout<<"NO"<<endl;
    }
    else{
        swap(arr[n-1], arr[n-2]);
        cout<<"YES"<<endl;
        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }

    }
}
int main(){
    int t;
    t = 1;
    while(t--){
        solve();
    }


    return 0;
}

