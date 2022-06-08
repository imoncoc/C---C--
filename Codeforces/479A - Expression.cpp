#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int ans = 0;

    if(a + (b * c) > ans ){
        ans = a + (b * c);
    }
    if( a * (b+c) > ans ){
        ans = a * (b+c);
    }
    if( (a * b * c) > ans ){
        ans = a * b * c;
    }
    if( (a+b) * c > ans ){
        ans = (a+b) * c;
    }
    if( (a+b) + c > ans ){
        ans = (a+b) + c;
    }

    cout<<ans<<endl;


    return 0;
}
