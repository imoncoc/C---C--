#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr[n+4];
    int mx = 0, indx = 0;
    string res = "YES";

    for(int i = 0; i < n; i++){
        cin>>arr[i];

        if(arr[i] > mx){
            mx = arr[i];
            indx = i;
        }
    }

    for(int i = indx+1; i < n; i++){
        if(arr[i] > arr[i-1]){
            res = "NO";
            break;
        }
    }

    for(int i = indx - 1; i >= 0; i--){
        if(arr[i] > arr[i+1]){
            res = "NO";
            break;
        }
    }

    cout<<res<<endl;
    }






    return 0;
}
