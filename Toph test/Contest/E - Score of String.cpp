#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,p;
    cin>>n>>p;

    map<string, int>mp, value;
    string a,b;

    for(int  i = 0; i < n; i++){
        cin>>a>>b;
        if(a == "I"){
            mp[b]=1;
            for(int i=0; i<p; i++) {
                    string temp=b.substr(0,i+1);
                    value[temp]++;
                }
        }
        else{
            if(!mp[b]){
                cout<<0<<endl;
            }
            else {
                int ans = 0;
                for(int i=0; i<p; i++) {
                    string temp=b.substr(0,i+1);
                    ans+=value[temp];

                    }
                    cout<<ans<<'\n'<<endl;
            }
        }

    }




    return 0;
}

