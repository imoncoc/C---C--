#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,s;
    cin>>a>>b>>s;

    long long ex = s - abs(a) - abs(b);
    if(ex < 0 || ex % 2){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }






    return 0;
}
