#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int n,b;cin>>n>>b;
    int a[n];
    int mx=b;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        int x=b/a[i];
        //cout<<"x: "<<x<<endl;
        int r=b%a[i];
        //cout<<"r: "<<r<<endl;
        for(int j=i;j<n;j++){
                //cout<<"XXXX: "<<x*a[j]+r<<endl;
            if((x*a[j]+r)>mx){
                mx=x*a[j]+r;
                //cout<<"mx: "<<mx<<endl;
            }
        }
        //cout<<endl;
    }
    cout<<mx<<endl;
    return 0;
}
