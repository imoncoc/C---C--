#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    int max1 = INT_MIN, count = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(x);

        if(x > max1){
            max1 = x;
        }
    }

    int max2 = arr[0];

    for(int i = 0; i < n; i++){
            if(max1 == arr[i]) count++;
        if(arr[i] > max2 && max2 < max1 && arr[i] != max1) max2 = arr[i];
    }

    if(count > 1) max2 = max1;

    //cout<<"max1: "<<max1<<endl;
    //cout<<"max2: "<<max2<<endl;



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


