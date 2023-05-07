#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n,k;
        cin>>n>>k;

        int p=0,ng=0;
        for(p=0;p<=n;p++)
        {
            int a=(p*(p-1))/2;
            int b=((n-p)*((n-p)-1))/2;
            if(a+b==k)
            {
                ng=n-p;
                break;
            }
        }
        if(p<=n)
        {
            cout<<"YES"<<endl;
            while(p--)cout<<1<<" ";
            while(ng--)cout<<-1<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

