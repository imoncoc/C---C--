#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, target;
    cin>>n>>target;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    if(n == 1){
        cout<<0<<endl;
        return;
    }

    sort(arr.begin(), arr.end());
    int ans = 0, cnt = 0;

    for(int i = 0; i < n; i++){
            if(i == 0){
                cnt++;
            }
        else if( (arr[i] - arr[i-1]) <= target){
            cnt++;
        }
        else{
            cnt = 1;
        }

        if(ans < cnt){
            ans = cnt;
        }
        //cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
        //cout<<"cnt: "<<cnt<<endl;
    }

    cout<<n - ans<<endl;
    //cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

