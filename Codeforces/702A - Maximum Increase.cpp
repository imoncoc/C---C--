#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int ans = 1, count = 1;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 1; i < n; i++){
            //cout<<"arr["<<i-1<<"]: "<<arr[i-1]<<" arr["<<i<<"]: "<<arr[i]<<endl;
        if(arr[i-1] < arr[i]) count++;
        if(count > ans ) ans = count;
        else if(arr[i-1] > arr[i]) count = 1;
        else if(arr[i-1] == arr[i]) count = 1;
        //cout<<"count: "<<count<<endl;
    }

    //cout<<"ans: "<<ans<<endl;
    cout<<ans<<endl;






    return 0;
}
