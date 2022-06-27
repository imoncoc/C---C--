#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<char> v;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == '1' || str[i] == '2' || str[i] == '3' ){
            v.push_back(str[i]);
        }
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout<<v[i];
        if(i != v.size() - 1){
            cout<<'+';
        }
    }





    return 0;
}

