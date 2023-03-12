#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int mx = INT_MIN;
    int pos = 0, neg = 0;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        mx = max(arr[i], mx);
        if(arr[i] > 0) pos++;
        else neg++;
    }

    //cout<<"mx: "<<mx<<endl;

    //sort(arr.begin(), arr.end(), greater<int>());

    for(int i = 1; i <= n; i++){
            if(i > pos){
                pos--;
                cout<<pos<<" ";
            }
            else{
                cout<<i<<" ";
            }

    }
    cout<<endl;

    int a = 0;
    for(int i = 0; i < n; i++){
            if(neg != 0){
                cout<<1<<" "<<0<<" ";
                neg--;
                i++;
                }
                else{
                        a++;
                    cout<<a<<" ";
                }

    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

