#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int count = 0, cons = 0, l = 0;

    for(int i = 0; i < n; i++){
        cons++;
        if(i == n-1){
            if(l == 0 || arr[l-1] > arr[l] ){
            count++;
            }
        }
        else{
            if( arr[i+1] == arr[i] ) {
                continue;
            }
            else if( arr[i+1] < arr[i] ) {
                l = i+1;
                cons = 0;
            }
            else{
                if(l == 0 || arr[l-1] > arr[l]){
                    count++;
                }
                l = i +1;
                cons = 0;
            }
        }
    }

    if(count == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    //t = 1;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

