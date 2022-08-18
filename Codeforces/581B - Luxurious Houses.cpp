#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    //vector<int> arr;
    cin>>n;
     int arr[n];
    vector<int> myVec;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int x = 0;

    for(int i = n-1; i >= 0; i--){
        int mx = max(0, (x - arr[i]) );
        x = max(x, arr[i] + 1);
        myVec.push_back(mx);
    }

    reverse(myVec.begin(), myVec.end());
    for(int i = 0; i < n; i++){
       cout<<myVec[i]<<" ";
    }







    return 0;
}
