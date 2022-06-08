#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
    cin>>n;
    int arr1[n], arr2[n];

    for(int i = 0; i < n; i++ ){
        cin>>arr1[i];
    }
    for(int i = 0; i < n; i++ ){
        cin>>arr2[i];
    }

    int count = 0, ans = 0;
    string res = "Yes";



    for(int i = 0; i < n; i++){
            if(arr1[i] < arr2[i]){
                res = "NO";
                break;
            }
        if(arr2[i] != 0){
            count = arr1[i] - arr2[i];

            if(count > ans){
                ans = count;
            }

            if(ans > arr1[i]){
                    res = "";
                res = "NO";
                break;
            }
        }
    }


    cout<<res<<endl;
    }

    return 0;
}
