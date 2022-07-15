#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin>>n>>k;
    long long ans = 0;
    long long temp = n/2;

    if(n % 2 == 0){
        if(temp >= k){
        ans = k + k-1;
      }
        else{
        ans = (k - temp) * 2;
      }
    }
    else{
        if(temp+1 >= k){
            ans = k + k-1;
        }
        else{
            ans = (k - (temp+ 1) ) * 2;
        }
    }

    cout<<ans<<endl;


    return 0;
}
