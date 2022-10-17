#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    if(is_sorted(arr.begin(), arr.end())){
        cout<<0<<endl;
        return;
    }

    int left = 0, right = 0;

    for(int i = n - 1; i >= 0; i--){
        if(arr[i] == 0){
            right = i;
            break;
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            left = i;
            break;
        }
    }

    int ans = 0;

    while(left < right){
        if(arr[left] == 1 && arr[right] == 0){
            arr[right]++;
            arr[left]--;
            ans++;
        }
        else if(arr[left] == 0){
            left++;
        }
        else if(arr[right] == 1){
            right--;
        }
    }

    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

