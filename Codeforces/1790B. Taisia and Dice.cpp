#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, s, r;
     cin>>n>>s>>r;
     int max_dice = 0, divite = 0, mod = 0;

      max_dice = s - r;
      divite = r / (n-1);
      mod = r % (n-1);
     //cout<<"max_dice: "<<max_dice<<endl;
     //cout<<"divite: "<<divite<<endl;
     //cout<<"mod: "<<mod<<endl;

     cout<<max_dice<<" ";
     for(int i = 0;  i< n-1; i++){
        if(mod > 0){
            cout<<divite+1<<" ";
        }
        else{
            cout<<divite<<" ";
        }
        mod--;
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

