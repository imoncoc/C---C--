#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    vector<string> vec;
    for(int i = 1; i < n; i++){
            string sub = "";
               sub += s[i-1];
               sub += s[i];
            vec.push_back(sub);
        //cout<<s[i-1]<<s[i]<<" ";
    }

    for(auto i = 0; i < vec.size(); i++){
            for(int j = i+1; j < vec.size(); j++){
                if(vec[i] == vec[j]) count++;
            }

       if(count == 1) break;
    }


    if(count >= 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

