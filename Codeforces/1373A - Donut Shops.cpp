#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
    cin>>a>>b>>c;
    int x = 1, y = b;

    if(c <= a) x = -1;
     if( (c/b) >= a ) y = -1;

    cout<<x<<" "<<y<<endl;
    }






    return 0;
}
