#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};
string dc="DLRU";


 int n,m;             cin>>n>>m;
      int x1,y1;           cin>>x1>>y1;
      int x2,y2;           cin>>x2>>y2;

      int ans=4;

      ans=min(ans,min(n,m));

      int cnt1=0,cnt2=0;
      for(int i=0;i<4;i++){
         int x=x1+dx[i];
         int y=y1+dy[i];
         cnt1+=(x>0 and x<=n and y>0 and y<=m);
      }
      for(int i=0;i<4;i++){
         int x=x2+dx[i];
         int y=y2+dy[i];
         cnt2+=(x>0 and x<=n and y>0 and y<=m);
      }

          ans=min(ans,min(cnt1,cnt2));

      cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

