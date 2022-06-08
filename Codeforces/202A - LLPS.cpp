#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    string res = "";
    int n = st.size();

    for(int i = 0; i< n; i++){
            if(res.size() >= 1 && res[0] < st[i]){
                res = "";
            }
        if(res[0] < st[i] || res[0] == st[i]){
            res += st[i];
        }
    }


    cout<<res<<endl;


    return 0;
}
