#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
    cin>>a>>b;
    int ans = 0;
    ans = min(a, min(b, (a+b)/3));

    cout<<ans<<endl;
    }




    return 0;
}
