#include <bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> arr;
    for(int i = 0; i < 4; i++){
            int x;
    cin>>x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());
    int a = 0, b = 0, c = 0;
    a = arr[3] - arr[2];
    b = arr[0] - a;
    c = arr[1] - a;

    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main(){

        solve();



    return 0;
}

