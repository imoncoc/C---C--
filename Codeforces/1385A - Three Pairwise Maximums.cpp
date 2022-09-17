#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
     vector<int> arr(3);
    for(int i = 0; i < 3; i++) cin>>arr[i];
    sort(arr.begin(), arr.end());

    if(arr[1] == arr[2]){
            cout<<"YES"<<endl;
        cout<<arr[0]<<" "<<arr[0]<<" "<<arr[1]<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   }




    return 0;
}
