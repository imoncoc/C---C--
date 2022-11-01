#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum += arr[i];
    }

    if(n == 1){
        cout<<0<<endl;
    }
    else{
        sort(arr.begin(), arr.end());
        int maxi = arr[n - 1] * n;

        cout<<maxi-sum<<endl;
    }




    return 0;
}
