#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2;
    cin>>str1>>str2;
    string res;
    int n = str1.size();

    for(int i = 0; i < n; i++){
        if(str1[i] == str2[i]){
            res += '0';
        }
        else{
            res += '1';
        }
    }


    cout<<res<<endl;





    return 0;
}
