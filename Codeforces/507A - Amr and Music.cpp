#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, target;
    cin>>n>>target;
    vector<pair<int, int>> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i].first,arr[i].second = i +1;
    }

    sort(arr.begin(), arr.end());

    /*
    for(int i = 0; i < n; i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    */

    int sum = 0, count = 0;
    for(int i = 0; i < n; i++){
            sum += arr[i].first;
        if(sum <= target) count++;
    }

    cout<<count<<endl;
    for(int i = 0; i < count; i++){
        cout<<arr[i].second<<" ";
    }












    return 0;
}
