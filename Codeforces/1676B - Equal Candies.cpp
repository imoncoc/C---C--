#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int mini = INT_MAX, sum = 0, ans = 0;


    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(mini > arr[i]){
            mini = arr[i];
        }
    }

    mini = mini * n;
    ans = sum - mini;

    //cout<<"Sum: "<<sum<<endl;
    //cout<<"mini: "<<mini<<endl;
    cout<<ans<<endl;
    }



    return 0;
}
