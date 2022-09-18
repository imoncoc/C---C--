#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int ans = n * m;

        if(ans % 2 == 0){
            cout<<ans/2<<endl;
        }
        else{
            cout<<(ans/2)+1<<endl;
        }


    }





    return 0;
}
