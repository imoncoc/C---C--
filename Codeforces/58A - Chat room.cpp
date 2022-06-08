#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    string ans = "hello", res = "";
    int n = st.size(), count = 0, countSt = 0;

    for(int i = 0; i < n; i++){
        if(st[i] == ans[count]){
            count++;
            countSt = count - 1;
            res += st[i];
        }
    }

    if(res == ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}
