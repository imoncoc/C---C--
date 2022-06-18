#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n = str.size();
    int count = 0;
    bool isUper = true;
    string res = "";

    for(int i = 1; i < n; i++){
        if(str[i] == toupper(str[i])){
            count++;
        }
    }

    if(count == n - 1){
        isUper = false;
    }


    if(!isUper){
        for(int i = 0; i < n; i++){
        if(i == 0 && str[i] == tolower(str[i])){
            res += toupper(str[i]);
        }
        else if(i == 0 && str[i] == toupper(str[i])){
            res += tolower(str[i]);
        }
        else{
            res += tolower(str[i]);
        }

    }
    }
    else{
        res = str;
    }



    cout<<res<<endl;

    return 0;
}
