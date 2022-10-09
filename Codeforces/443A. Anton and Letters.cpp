#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> str;
    for(int i = 0; i < 100; i++){
        string x;
        cin>>x;
        if(x[1] == "}"){
            break;
        }
        str.push_back(x);
    }

    for(int i = 0; i < str.size(); i++){
        cout<<str[i]<<" ";
    }





    return 0;
}
