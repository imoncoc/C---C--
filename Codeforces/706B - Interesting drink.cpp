#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;

    for(int i = 0; i < n; i++){
            int x;
            cin>>x;
        arr.push_back(x);
    }

    int m;
    cin>>m;

    sort(arr.begin(), arr.end());

    for(int i = 0; i < m; i++){
        int a;
        cin>>a;
        cout<<lower_bound(arr.begin(), arr.end(), a+1)  - arr.begin()<<endl;
    }









    return 0;
}
