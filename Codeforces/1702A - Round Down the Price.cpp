#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, sum = 0, ans = 0;
    cin>>n;

    for(int i = 0; i < 10; i++){
            ans = sum;
        sum = pow(10, i);
       // cout<<"ans: "<<ans<<endl;
        //cout<<"sum: "<<sum<<endl;

        if(sum == n){
            cout<<0<<endl;
            break;
        }
       else if(sum > n){
            ans = n - ans;
            cout<<ans<<endl;
            break;
        }
    }

    //cout<<ans<<endl;
    }




    return 0;
}
