#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    st.push(4);
    st.top();
    st.pop();
    cout<<st.top();
}
int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

