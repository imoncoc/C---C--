#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "abc";
    int n = str.size();
    vector<string> ans;

    for(int i = 0; i < pow(2,n); i++){
            string sub = "";
        for(int j = 0; j < n; j++){
            if(i &  ( 1 << j ) ){
                sub += str[j];
            }
        }
        if(sub.size()){
            ans.push_back(sub);
        }

    }

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }





    return 0;
}

