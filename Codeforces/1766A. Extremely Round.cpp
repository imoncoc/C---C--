#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    long long count = 0;
    for(long long i = 1; i <= n; i++){
        if(i <= 9) count++;
        else if(i >= 10 && i < 100 && i % 10 == 0 ){
            count++;
            i += 9;
        }
        else if(i >= 100 && i < 1000 && i % 100 == 0){
            count++;
            i += 99;
        }
        else if(i >= 1000 && i < 10000 && i % 1000 == 0){
            count++;
            i += 999;
        }
        else if(i >= 10000 && i < 100000 && i % 10000 == 0){
            count++;
            i += 9999;
        }
        else if(i >= 100000 && i < 1000000 && i % 100000 == 0){
            count++;
            i += 99999;
        }
       // else if(||  || i % 1000 == 0 || i % 10000 == 0 || i % 100000 == 0)
    }

    cout<<count<<endl;
}
int main(){
    int t ;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

