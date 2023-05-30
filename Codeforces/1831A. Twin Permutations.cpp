#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
      int n;
      cin>>n;
      vector<int> a(n+1);
      for(int i=1;i<=n;i++){
         cin>>a[i];
      }

      for(int i=1;i<=n;i++){
         cout<<(n-a[i]+1)<<" ";
      }
      cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

