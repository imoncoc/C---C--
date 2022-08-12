#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string st;
    cin>>st;
    map<string, int> myMap;

    for(int i = 0; i < n; i++ ){
       for(int len = 1; len <= n-i; len++){
        //cout<<st.substr(i, len)<<endl;
        myMap[st.substr(i, len)]++;
       }
    }

    for (auto itr = myMap.begin(); itr != myMap.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }



    return 0;
}
