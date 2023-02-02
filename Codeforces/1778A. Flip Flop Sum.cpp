#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int sum = 0;
    bool flag = true;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
   // cout<<"sum: "<<sum<<endl;

    for(int i = 1; i < n; i++){
        if(arr[i-1] == -1){
                flag = false;
            if(arr[i] == -1){
                sum += 4;
                break;
            }
        }
    }

    if(arr[n-1] == -1 && flag){
        flag = false;
    }

    if(flag){
        sum -= 4;
    }
    //cout<<"Last Sum: "<<sum<<endl;
    cout<<sum<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

