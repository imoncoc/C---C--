#include<iostream>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans = 0;

    if( m * a > b ){
           int x = (n%m) * a;
     if(x > b){
        ans = (n/m) * b + b;
     }else{
         ans = (n / m) * b + x;
     }

    }
    else {
        ans = n * a;
    }

    cout<<ans<<endl;

    return 0;
}
