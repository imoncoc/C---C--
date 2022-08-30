#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        map<char, int> mp;
    int n;
    string str;
    cin>>n>>str;

    for(int i = 0; i < n; i++){
        mp[str[i]]++;
    }


    if(mp['T'] == 1 && mp['i'] == 1 && mp['m'] == 1 && mp['u'] == 1 && mp['r'] == 1){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    }


    return 0;
}
