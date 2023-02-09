#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int sum = 0;


    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    int ans = sum;

    //cout<<"sum: "<<sum<<endl;

    for(int i = 0; i < n-1; i++){
            int res = 0;

        for(int j = i; j < i+2; j++ ){
            //cout<<arr[j]<<" ";
            res += (arr[j] * -1);
            res += (arr[j] * -1);
        }
         res += sum;
         ans = max(res, ans);
        //cout<<endl;
        //cout<<"res: "<<res<<endl;
    }
    //cout<<endl;

    //cout<<"ans: "<<ans<<endl;



    cout<<ans<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

