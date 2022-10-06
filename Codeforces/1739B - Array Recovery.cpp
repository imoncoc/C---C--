#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    bool flag = false;

    for(int i = 0; i < n; i++ ){
        cin>>arr[i];
    }

    for(int i = 1; i < n-1; i++){
            if(arr[i] > arr[i+1] && arr[i+1] != 0){
                flag = true;
            }
            cout<<"arr["<<i<<"]: "<<arr[i]<<"   arr["<<i+1<<"]: "<<arr[i+1]<<endl;
    }





    if(flag){
        cout<<-1<<endl;
    }
    else{
            for(int i = 1; i < n; i++){
        arr[i] = arr[i-1] + arr[i];
    }

        for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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

