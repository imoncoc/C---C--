#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, moves;
    cin>>n>>moves;

    vector<int> arr1, arr2;

    for(int i = 0; i < n; i++ ){
        int x;
        cin>>x;
        arr1.push_back(x);
    }

    for(int i = 0; i < n; i++ ){
        int x;
        cin>>x;
        arr2.push_back(x);
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end(), greater<int>() );

    for(int i = 0; i < moves; i++){
        if(arr1[i] < arr2[i]) arr1[i] = arr2[i];
        else break;
    }

    /*
    cout<<"arr1: ";
    for(auto it: arr1){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"arr2: ";
    for(auto it: arr2){
        cout<<it<<" ";
    }
    cout<<endl;
    */

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr1[i];
    }

    cout<<sum<<endl;
    }





    return 0;
}
