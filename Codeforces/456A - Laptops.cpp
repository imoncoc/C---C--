#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   string res = "Poor";

   for(int i = 0; i < n; i++){
    int a, b;
    cin>>a>>b;

    if(a < b) res = "Happy";
   }

   cout<<res<<" Alex"<<endl;



    return 0;

}
