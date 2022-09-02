#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a, b;
    cin>>a>>b;
    map<char, int> mp;

    mp[a[0]]++;
    mp[a[1]]++;
    mp[b[0]]++;
    mp[b[1]]++;

    cout<<mp.size()-1<<endl;
    }






    return 0;
}
