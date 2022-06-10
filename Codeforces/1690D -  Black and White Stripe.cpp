#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
    cin>>n>>k;
    string st;
    cin>>st;
    int count = 0;

    for(int i = 0; i < k; i++){
        if(st[i] == 'W')count++;
    }

    int ans = count;

    for(int i = k; i < n; i++){
        if(st[i] == 'W') count++;
        if(st[i-k] == 'W') count--;
        ans = min(ans,count);
    }

    cout<<ans<<endl;
    }

    return 0;
}
