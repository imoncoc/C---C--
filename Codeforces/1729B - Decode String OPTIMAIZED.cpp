#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    string s, res;
    cin>>n>>s;

    for(int i = 0; i < n; i++){
        if( i+2 < n && s[i+2] == '0' && ( s[i+3] != '0' || i+3 >= n )  ){
            int num = (s[i] - '0') * 10 + s[i+1] - '0';
            res += char(96+num);
            i += 2;
        }
        else{
          int num = s[i] - '0';
          res += char(96+num);
        }
    }

    cout<<res<<endl;
    }





    return 0;
}
