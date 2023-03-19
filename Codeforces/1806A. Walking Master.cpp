#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    long long count = -1, sum = 0;

    if(d > b){
        sum = d - b;
        a = a + sum;
        if(a > c){
            count = sum;
            count += a - c;
        }
        else if (a == c){
            count = sum;
        }
    }
    if(b == d){
       if(a > c){
            count = sum;
            count += a - c;
        }
        else if (a == c){
            count = sum;
        }
    }

    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

