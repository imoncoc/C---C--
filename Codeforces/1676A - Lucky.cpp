#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
    cin>>n;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    n = n / 10;
    d = n % 10;
    n = n / 10;
    e = n % 10;
    n = n / 10;
    f = n % 10;
    n = n / 10;

    /*
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
    cout<<"d: "<<d<<endl;
    cout<<"e: "<<e<<endl;
    cout<<"f: "<<f<<endl;
    */

    if( (a+b+c) == (d+e+f) ){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }





    return 0;
}
