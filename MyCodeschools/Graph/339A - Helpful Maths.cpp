#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<int> v;

    for(int i = 0; i < str.size(); i++){
        cout<<typeof(str[i]);

        if( typeof(str[i]) ){
            v.push_back(stoi(str[i]));
        }
    }


    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }





    return 0;
}
