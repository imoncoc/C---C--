#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
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


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n- 1; j++){

            cout<<arr[i][j];
        }
        cout<<endl;
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

