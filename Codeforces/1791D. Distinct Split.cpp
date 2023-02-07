#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;
    vector<int> prefix(n, 0), suffix(n, 0);

    for(int i = 0; i < n; i++){
        st.insert(s[i]);
        prefix[i] = st.size();
    }
    st.clear();

    for(int i = n-1; i >= 0; i--){
        st.insert(s[i]);
        suffix[i] = st.size();
    }
    st.clear();

  /*
    cout<<"prefix: ";
    for(int i = 0; i < n; i++){
        cout<<prefix[i]<<" ";
    }
    cout<<endl;

    cout<<"suffix: ";
    for(int i = 0; i < n; i++){
        cout<<suffix[i]<<" ";
    }
    cout<<endl;
    cout<<"size: "<<st.size()<<endl;
    */
    int ans = 0;
    for(int i = 0; i < n-1; i++){
            ans = max(ans, (prefix[i] + suffix[i+1]));
        //cout<<"ans: "<<ans<<endl;
    }

    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

