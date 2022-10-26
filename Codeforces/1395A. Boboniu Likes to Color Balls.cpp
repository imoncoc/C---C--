#include <bits/stdc++.h>
using namespace std;
void solve(){
    bool flow=true;
       long long arr[4], count = 0, count1 = 0;
       for(long long i = 0; i < 4; i++){
           cin>>arr[i];
       }
       for(long long i = 0; i < 4; i++){
           if(arr[i] % 2 == 0) count++;
           else count1++;
           if(arr[i] == 0 && i != 3){
               flow = false;
           }
       }
      if(count == 0 || count1 == 0 || count1 == 1 || (count == 1 && flow)) {
            cout<<"YES"<<endl;
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

