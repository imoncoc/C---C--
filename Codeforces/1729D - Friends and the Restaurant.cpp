#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr1[n], arr2[n];

    for(int i = 0; i < n; i++) cin>>arr1[i];
    for(int i = 0; i < n; i++) cin>>arr2[i];

    vector<int> res;

    for(int i = 0; i < n; i++){
        int x = arr2[i] - arr1[i];
        res.push_back(x);
    }

    sort(res.begin(), res.end(), greater<int>());

    //for(int i = 0; i < n; i++) cout<<res[i]<<" ";
    //cout<<endl;

    int i = 0, j = n-1, count = 0;
    while( i < j){
        int ans = res[i] + res[j];
        //cout<<"ans: "<<ans<<endl;
        if(ans >= 0){
                count++;
            i++;
        j--;
        }
        else{
            j--;
        }
    }

    cout<<count<<endl;
    }






    return 0;
}
