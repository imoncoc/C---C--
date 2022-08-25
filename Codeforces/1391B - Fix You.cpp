#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, m, ans = 0;
        cin>>n>>m;
        string str[n];


        for(long long i = 0; i < n; i++){
            cin>>str[i];
        }

        for(long long i = 0; i < n - 1; i++){
            if(str[i][m-1] != 'D') ans++;
        }

        for(long long i = 0; i < m - 1; i++){
            if(str[n-1][i] != 'R') ans++;
        }

        cout<<ans<<endl;
    }



    return 0;
}
