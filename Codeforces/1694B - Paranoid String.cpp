#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
        string str;
        cin>>str;
    long long int ans = n;
    for(int i = 1; i < n; i++){
        if(str[i-1] != str[i]){
            ans += i;
        }
    }

        cout<<ans<<endl;
    }




    return 0;
}
