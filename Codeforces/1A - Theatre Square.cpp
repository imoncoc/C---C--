#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a, len = 0, bre = 0, ans = 0;
    cin>>n>>m>>a;

    len = n/a;
    if(n % a != 0 ){
        len++;
    }

    bre = m/a;
    if(m % a != 0 ){
        bre++;
    }

    ans = len * bre;

    cout<<ans<<"/n";



    return 0;
}
