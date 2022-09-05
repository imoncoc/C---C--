#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abaccb";
    int n = s.size();
    vector<int> distance = {1,3,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};



    map<char, vector<int>> mp;
    for(int i = 0; i < n; i++ ){
        mp[s[i]].push_back(i);
    }

     for(auto it: mp){
        if(it.second[1] -  it.second[0] - 1 != distance[it.first - 'a'] ){
            cout<<"false"<<endl;
            return 0;
        }
     }

     cout<<"true"<<endl;





    return 0;
}
