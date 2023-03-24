#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string s;
    cin>>s;
    map<char, int> mp;

    for(int i = 0; i < 4; i++){
        mp[s[i]]++;
    }

    int maxi = 0;

    for(auto it: mp){
     //cout<<it.first<<" "<<it.second<<endl;
     if(it.second == 3){
        maxi = 3;
     }
    }

    int len = mp.size();
    if(len == 1){
        cout<<-1<<endl;
    }
    else if(len == 3){
        cout<<4<<endl;
    }
    else if(len == 2 && maxi){
        cout<<6<<endl;
    }
    else{
        cout<<4<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

