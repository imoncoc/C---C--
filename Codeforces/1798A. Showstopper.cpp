#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr1(n), arr2(n);
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i < n; i++){
        cin>>arr2[i];
    }

    for(int i = 0; i < n; i++){
        if(arr1[i] > arr2[i]){
            swap(arr1[i], arr2[i]);
        }
    }

    /*
    cout<<"arr1: ";
    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl<<"arr2: ";
    for(int i = 0; i < n; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    */

    int max1 = *max_element(arr1.begin(), arr1.end());
    int max2 = *max_element(arr2.begin(), arr2.end());

    //cout<<"max1: "<<max1<<endl;
    //cout<<"max2: "<<max2<<endl;

    if(max1 == arr1[n-1] && max2 == arr2[n-1]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

