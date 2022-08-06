#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int, int>>arr;

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(make_pair(x, i+1));
    }

    sort(arr.begin(), arr.end());


    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << arr[i].second<<" ";
    }






    return 0;
}
