#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b, c,d;
    cin>>a>>b>>c>>d;
    int count = 0, ans = 0;

    ans = a+b+c+d;

    if(ans == 0){
        cout<<ans<<endl;
    }
    else if(ans != 4){
        cout<<1<<endl;
    }
    else cout<<2<<endl;

    }

    return 0;
}
