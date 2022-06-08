#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr1[n], arr2[n];

    for(int i = 0; i < n; i++ ) cin>>arr1[i];
    for(int i = 0; i < n; i++ ) cin>>arr2[i];

    vector<int> myVector;
    int a = 0, b = 0, c = 0, ans = 0;

    for(int i = 0; i < n; i++){
        a = arr2[i] - arr1[i];
        b = arr2[i] - c;
        c = arr2[i];
        ans = min(a,b);
        myVector.push_back(ans);
    }

    for(int i = 0; i < n; i++){
        cout<<myVector[i]<<" ";
    }
    cout<<endl;
    }




    return 0;
}
