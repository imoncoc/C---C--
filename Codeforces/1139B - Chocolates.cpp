#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    long long res = arr[n-1];

    for(int i = n-2; i >= 0; i--){
        int t = min(arr[i+1]-1, arr[i]);
        if(t < 0) t = 0;
        arr[i] = t;
        res += t;
    }

    cout<<res<<endl;

    return 0;
}
