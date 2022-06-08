#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 0;

        if(n <= 2){
            ans = 0;
        }else{
            if(n % 2 == 0){
                ans = (n/2)-1;
            }else{
                ans = n/2;
            }
        }


        cout<<ans<<endl;
    }





    return 0;
}
