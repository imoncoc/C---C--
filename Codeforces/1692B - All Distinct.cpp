#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr[n];
    int count = 0, ans = 0;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    for(int i = 1; i < n; i++){
        if(arr[i-1] == arr[i])count++;
    }

    if(count % 2 == 1) count++;
    ans = n - count;
    cout<<ans<<endl;
    }



    return 0;
}
