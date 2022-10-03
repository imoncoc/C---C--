#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < n; i++) cin>>b[i];

    vector<long long> fire, frost;

    for(int i = 0; i < n; i++){
        if(a[i]){
            fire.push_back(b[i]);
        }
        else{
            frost.push_back(b[i]);
        }
    }

    if(fire.empty()){
        long long ans = accumulate(frost.begin(), frost.end(),(long long)0);
        cout<<ans<<endl;
    }
    else if(frost.empty()){
        long long ans = accumulate(fire.begin(), fire.end(),(long long)0);
        cout<<ans<<endl;
    }

    else{
        sort(fire.begin(), fire.end());
        sort(frost.begin(), frost.end());
        long long ans = 0;

        if(fire.size() == frost.size()){
            ans -= min(fire[0], frost[0]);
        }

        while(!fire.empty() && !frost.empty()){
            ans += (long long)2* (fire.back() + frost.back());
            fire.pop_back();
            frost.pop_back();
        }

        while(!fire.empty()){
            ans += fire.back();
            fire.pop_back();
        }

        while(!frost.empty()){
            ans += frost.back();
            frost.pop_back();
        }

        cout<<ans<<endl;
    }
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
