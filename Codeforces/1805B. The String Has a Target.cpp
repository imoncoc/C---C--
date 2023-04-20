#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    char mn = *min_element(s.begin(), s.end());

    if(s[0]==mn){
         int lastOcc=-1;
         for(int i=n-1;i>-1;i--){
            if(s[i]==mn){
               lastOcc=i;
               break;
            }
         }
         if(lastOcc!=-1){
            for(int i=lastOcc;i>0;i--){
               swap(s[i],s[i-1]);
            }
         }
      }
      else{
         int lastOcc;
         for(int i=n-1;i>-1;i--){
            if(s[i]==mn){
               lastOcc=i;
               break;
            }
         }
         for(int i=lastOcc;i>0;i--){
            swap(s[i],s[i-1]);
         }
      }
      cout<<s<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

