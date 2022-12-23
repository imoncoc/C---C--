#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    long long t, iceCream, distress = 0;
    cin>>t>>iceCream;
    while(t--){
      char s;
      cin>>s;
      long long x;
      cin>>x;
      if(s == '+'){
        iceCream += x;
        //cout<<"iceCream+: "<<iceCream<<" distress: "<<distress<<endl;
      }
      else{
        if( (iceCream - x) >= 0){
            iceCream -= x;
            //cout<<"iceCream-: "<<iceCream<<" distress: "<<distress<<endl;
        }
        else{
            distress++;
            //cout<<"iceCream: "<<iceCream<<" distress-: "<<distress<<endl;
        }
      }
    }

    //cout<<"iceCream: "<<iceCream<<" distress: "<<distress<<endl;
    cout<<iceCream<<" "<<distress<<endl;
}
int main(){
    int t;
    t = 1;
    while(t--){
        solve();
    }


    return 0;
}

