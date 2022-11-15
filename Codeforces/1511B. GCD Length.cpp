#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
      cin>>a>>b>>c;
      string s1="";
      string s2="";
      string s3="1";
      if(a==b && b==c && a==c){
         s1+='1';
         s2+='1';
         for(int i=1;i<=a-1;i++){
            s1+='0';
            s2+='0';
         }
         cout<<s1<<" "<<s2<<endl;
      }
      else{
         for(int i=1;i<=c-1;i++){
            s3+='0';
         }
         s1+='1';
         for(int i=1;i<=(min(a,b)-1);i++){
            s1+='0';
         }
         s2+='1';
         int z=max(a,b)-(c+1);
         for(int i=1;i<=z;i++){
            s2+='0';
         }
         s2+=s3;
         if(s2.size()==a){
            cout<<s2<<" "<<s1<<endl;
         }
         else{
            cout<<s1<<" "<<s2<<endl;
}
      }}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

