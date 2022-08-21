#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int maxi = *max_element(arr.begin(), arr.end());
    int mini = *min_element(arr.begin(), arr.end());
    int left = -1, right = 0;



    for(int i = 0; i < n; i++){
        if(mini == arr[i]) right = i;
        else if (maxi == arr[i] && left == -1){
            left = i;
        }
    }

    //cout<<"left: "<<left<<endl;
    //cout<<"right: "<<right<<endl;

    int ans = left + ( (n-1) - right);

    if(left > right) ans -= 1;
    if(ans == -1) ans = 0;
    cout<<ans<<endl;





    return 0;
}
