#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,3,3,3,5,5,5,2,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }


    for (auto x : mp)
      cout << x.first << " " << x.second << endl;

    multimap<int, int, greater<int>>mm;

    for(auto it:mp){
        mm.insert({it.second, it.first});
    }

    cout<<endl;
    for (auto x : mm)
      cout << x.first << " " << x.second << endl;

      int count = 0, sum = 0;

      for(auto x:mm){
        sum += x.first;
        count++;
        if(sum >= n/2) break;
      }

      cout<<"count: "<<count<<endl;







    return 0;
}
