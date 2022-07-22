#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin>>n>>x;

    int ans = n;
    int pos;

    while(n >= x){
        ans += n/x;
        n = n/x + n %x;
    }

    cout<<ans<<endl;





    return 0;
}
