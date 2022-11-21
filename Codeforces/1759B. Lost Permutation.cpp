#include <bits/stdc++.h>
using namespace std;
void solve(){
    int m, s;
    cin>>m>>s;
    vector<int> b(m);
    vector<bool> taken(1111, false);

    for(int i = 0; i < m; i++){
        cin>>b[i];
    }

    for(int i = 0; i < m; i++) taken[b[i]] = true;
    int mx = *max_element(b.begin(), b.end());

    int sum = 0;
    bool ok = false;

    int current = 1;
    while(true){
        if(taken[current]){
            current++;
            continue;
        }

        sum += current;
        taken[current] = true;

        if(sum == s){
            bool imp = false;


        for(int i = current; i < mx; i++){
            if(!taken[i]){
                imp = true;
                break;
            }
        }

        if(!imp){
            ok = true;
        }
        break;
    }
    current++;
    if(sum > s) break;
    }

    if(ok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

