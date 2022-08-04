#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int ans = 0;

    if(n == 1) ans = 2;

    else if(n % 3 == 0) ans = n / 3;
    else if(n % 3 == 1){
        if(n == 4) ans = 2;
        else{
            ans += n / 3;
            ans++;
        }
    }
     else if(n % 3 == 2 ){
        ans += n / 3;
        ans++;
     }



     cout<<ans<<endl;
    }





    return 0;
}
