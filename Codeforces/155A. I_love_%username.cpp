#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    ll maxi = INT_MIN, mini = INT_MAX, count = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(x > maxi){
            maxi = x;
            count++;
        }
        if(x < mini){
            mini = x;
            count++;
        }
    }

    cout<<count-2<<endl;
}
int main(){
    solve();


    return 0;
}

