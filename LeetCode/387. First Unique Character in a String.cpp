#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "loveleetcode";
    unordered_map<char, int> unMap;
    int n = s.size();

    /*
    for (char& c : s) {
            unMap[c]++;
        }
        */

        for(int i = 0; i < n; i++){
            unMap[s[i]]++;
        }

    for (auto x : unMap)
      cout << x.first << " " << x.second << endl;


      for (int i = 0; i < s.size(); i++) {
            if (unMap[s[i]] == 1){
                cout<<i<<endl;
                break;
            }
        }






    return 0;
}


