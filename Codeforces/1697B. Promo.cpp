#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n,m;
    cin>>n>>m;
    int ar[n+3];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    sort(ar+1,ar+n+1);
    ll pre[n+4];
    pre[0]=0;
    for(int i=n,j=1;i>=1;i--,j++)pre[j]=pre[j-1]+ar[i];
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        ll ans=pre[x]-pre[x-y];
        cout<<ans<<endl;
    }

    return 0;
}

