#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
    cin>>n>>x;
    int arr[n+n+1];
    for(int i = 0; i < n+n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n+n);
    int count = 0;
    for(int i = 0; i < n; i++){
            //cout<<"i: "<<arr[i]<<" J: "<<arr[n+i]<<endl;
        if(arr[n+i] - arr[i] >= x )count++;
    }

    if(count == n){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

    }



    return 0;
}

