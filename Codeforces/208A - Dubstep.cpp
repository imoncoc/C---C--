#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string res = "";
    int n = str.size();
    bool isWUB = false;

    for(int i = 0; i < n; i++){

         if(isWUB && str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B' ){
            res += " ";
            isWUB = false;
        }
        if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
            i += 2;
        }
        else{
            res += str[i];
            isWUB = true;
        }
    }

    cout<<res<<endl;


    return 0;
}
