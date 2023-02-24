#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    /*
    vector<string> st(9);
    vector<int> arr(9);

    for(int i = 0; i < n; i++){
        cin>>st[i]>>arr[i];
    }

    for(int i = 0; i < n; i++){
        cout<<st[i]<<" "<<arr[i]<<endl;
    }
    */
    map<int, string> mp;

    for(int i = 0; i < n; i++){
            string s;
          int num;
          cin>>s>>num;
        mp.insert({num, s});
    }

    /*
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    */

    auto it = mp.begin();
    cout<<"Selise Coding Challenge 2023 Winners"<<endl;
    cout<<"Winner: "<<it->second<<" => "<<it->first<<endl;
    it++;
    cout<<"1st Runner Up: "<<it->second<<" => "<<it->first<<endl;
    it++;
    cout<<"2nd Runner Up: "<<it->second<<" => "<<it->first<<endl;
}
int main(){


        solve();



    return 0;
}


