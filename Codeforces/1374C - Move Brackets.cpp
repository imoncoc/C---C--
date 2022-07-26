#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
     int n;
    cin>>n;
    char str[n];

    for(int i = 0; i < n; i++ ){
        cin>>str[i];
    }

    int count = 0, ans = 0;
    for(int i = 0; i < n; i++ ){
        if(str[i] == '(' ) count++;
         if(str[i] == ')' ){
            if(count >= 1) count--;
            else ans++;
        }
    }

    cout<<ans<<endl;
    //cout<<"count: "<<count<<endl;
   }



    return 0;
}
