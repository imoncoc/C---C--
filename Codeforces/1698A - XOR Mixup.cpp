#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr[n];
    int ans = 0, sum;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }


    for(int i = 0; i < n; i++){
            ans = 0, sum = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                ans = arr[i];
            }
            else{
                sum = ( sum ^ arr[j]);
            }
        }
        if(ans == sum){
            //cout<<sum<<endl;
            break;
        }
    }


    cout<<ans<<endl;
    }



    return 0;
}
