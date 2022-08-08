#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2;
    cin>>str1>>str2;
    string ans;
    int n = str1.size();

    for(int i = 0; i < n; i++){
        if(str1[i] == str2[i]){
            ans += '0';
        }
        else{
            ans += '1';
        }
    }


    cout<<ans<<endl;





    return 0;
}
