#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int two = 0;

    for(int i = 0; i < n; i++ ){
        cin>>arr[i];
        if(arr[i] == 2) two++;
    }

    if(two % 2 == 1){
        cout<<-1<<endl;
    }
    else if(two == 0){
        cout<<1<<endl;
    }
    else{
        int res = two/2;
        for(int i = 0; i < n; i++){
            if(arr[i] == 2){
                res--;
            }
            if(res == 0){
                cout<<i+1<<endl;
                break;
            }
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

