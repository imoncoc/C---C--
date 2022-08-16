#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::toupper);

    map<char, int> mp;

    for(int i = 0; i < n; i++){
            //cout<<str[i]<<" ";
        mp[str[i]]++;
    }

    /*
    cout<<endl;
    for (auto x : mp)
      cout << x.first << " " << x.second << endl;
      */

      if(mp.size() == 26) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;






    return 0;
}
