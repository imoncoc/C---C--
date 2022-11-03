#include <bits/stdc++.h>
using namespace std;
void solve(){
    int k;
    vector<int>v;
        cin>>k;
        int i=1;
        while(v.size()!=1000)
        {
            if (i%10!=3 && i%3!=0)
            v.push_back(i);
            i++;
        }
        cout<<v[k-1]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

