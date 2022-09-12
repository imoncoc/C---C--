#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    string s;
    cin>>s;
    char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    stack<char>st;
    string sf = "";

    for(long long i = 0; i < n; i++){
        st.push(s[i]);
    }

    while(!st.empty()){
        long long s1 = st.top() - '0';
        st.pop();

        if(s1 != 0) sf += (s1-1 + 'a');
        else{
            long long s2 = st.top() - '0';
            st.pop();
            long long x = st.top() - '0';
            st.pop();
            long long y = x*10+s2;
            sf += (y-1+ 'a');
        }
    }

    reverse(sf.begin(), sf.end());
    cout<<sf<<endl;
    }




    return 0;
}
