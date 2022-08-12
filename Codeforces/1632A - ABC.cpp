#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        if(n > 2 ) cout<<"NO"<<endl;
        else {
            if(n == 2 && str[0] == str[1]) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }






    return 0;
}
