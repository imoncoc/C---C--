#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int ans = 0;

    if(m > n) ans = -1;

    else if(n % 2 == 0){
        ans = n / 2;
    }else{
        ans = (n / 2) + 1;
    }

    while(ans % m > 0){
        ans++;
    }

    cout<<ans<<endl;






    return 0;
 }
