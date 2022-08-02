#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;

    if(n < 10) cout<<n<<endl;
    else if(n < 18) cout<<n-9<<9<<endl;
    else if(n < 25) cout<<n-17<<8<<9<<endl;
    else if(n < 31) cout<<n-24<<7<<8<<9<<endl;
    else if(n < 36) cout<<n-30<<6<<7<<8<<9<<endl;
    else if(n < 40) cout<<n-35<<5<<6<<7<<8<<9<<endl;
    else if(n < 43) cout<<n-39<<4<<5<<6<<7<<8<<9<<endl;
    else if(n < 45) cout<<n-42<<3<<4<<5<<6<<7<<8<<9<<endl;
    else if(n < 46) cout<<n-44<<2<<3<<4<<5<<6<<7<<8<<9<<endl;
    }





    return 0;
}
