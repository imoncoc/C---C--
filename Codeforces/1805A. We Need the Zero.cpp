#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
     int n;
     cin>>n;
      vector<int> a(n);
      for(int i=0;i<n;i++){
         cin>>a[i];
      }

      int x=0;
      for(int i=0;i<n;i++){
         x^=a[i];
      }
      for(int i=0;i<n;i++){
         a[i]^=x;
      }
      int y=0;
      for(int i=0;i<n;i++){
         y^=a[i];
      }
      if(y==0){
         cout<<x<<endl;
      }
      else{
         cout<<-1<<endl;
      }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

