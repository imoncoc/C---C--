#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    long long a,b,n,m;
    cin>>a>>b>>n>>m;
    if(n<=m){
        cout<<n*min(a,b)<<endl;
        return;
    }

    if((m*a)<=(m+1)*b){
        long long temp1=n/(m+1);
        long long temp2=n%(m+1);
        long long temp3=temp1*m*a;
        // cout<<"temp1 is "<<temp1<<endl;
        // cout<<"temp2 is "<<temp2<<endl;
        // cout<<"temp3 is "<<temp3<<endl;
        temp3+=temp2*min(a,b);
        cout<<temp3<<endl;
    }
    else{
        cout<<n*b<<endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

