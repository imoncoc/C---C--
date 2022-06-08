#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int> ans;
    int count = 0;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }


    for(int i = 1; i <= n; i++){
        if(arr[i-1] == arr[i]){
            count++;
        }
    }

    if(count == n){
        for(int i = 0; i < n; i++){
            ans.push_back(arr[i]);
        }
    }

    for(int i = 0; i < n; i++){
        cout<<ans[i]<<" "<<endl;
    }


    return 0;
}
