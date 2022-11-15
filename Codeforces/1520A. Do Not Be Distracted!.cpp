#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;

    for(int i = 0; i < n; i++){
        if(s[i] != s[i+1]){
                st.insert(s[i]);
        }

        auto pos = st.find(s[i]);
        if(pos != st.end() ){
            cout<<"NO"<<endl;
            break;
        }
    }

    cout<<"set: "<<endl;
     for (auto itr = st.begin(); itr != st.end(); itr++) {
        cout << *itr << " ";
    }

    cout << endl;

    cout<<"YES"<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

