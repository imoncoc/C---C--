#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;
    vector<vector<int>> arr;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < n- 1; j++){
                int x;
                cin>>x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }

/*
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n- 1; j++){

            cout<<arr[i][j];
        }
        cout<<endl;
    }
    */

    map<int, int> mp;
    int max_e = INT_MIN, res = INT_MIN;
    for(int i = 0; i < n; i++){
        mp[arr[i][0]]++;
    }

   // cout<<"map: ";
    for(auto it: mp){
        //cout<<it.first<<" "<<it.second<<endl;
        if(it.second > res){
                res = it.second;
            max_e = it.first;
        }
    }

    //cout<<endl<<"max_e: "<<max_e<<endl;


    //cout<<endl<<"ans: ";
    cout<<max_e<<" ";
    for(int i = 0; i < n; i++){
        if(arr[i][0] != max_e){
            for(int j = 0; j < n-1; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;

        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

