#include<bits/stdc++.h>
using namespace std;
map<string,int>mp,value;
string check="I";
void solve() {
        int n,p;
        cin>>n>>p;
        for(int i=0; i<n; i++) {
            string a,b;
            cin>>a>>b;
            if(a==check) {
                mp[b]=1;
                for(int i=0; i<p; i++) {
                    string temp=b.substr(0,i+1);
                    value[temp]++;
                }
            }
            else {
                if(!mp[b]) {
                    cout<<0<<'\n';
                }
                else {
                    int ans=0;
                    for(int i=0; i<p; i++) {
                    string temp=b.substr(0,i+1);
                    ans+=value[temp];

                    }
                    cout<<ans<<'\n';
                }
            }
        }

}
int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     while(t--) {
         solve();
     }
}
