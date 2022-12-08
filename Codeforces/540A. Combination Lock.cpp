#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s1, s2;
    cin>>s1>>s2;
    int sum = 0;

    for(int i = 0; i < n; i++){
            int x = s1[i] - 48;
            int y = s2[i] - 48;
            int a = abs(x-y);
            if(x < y){
                x += 10;
            }
            else{
                y += 10;
            }

            int b = abs(x-y);

            sum += min(a, b);

       // cout<<"a: "<<a<<" b: "<<b<<endl;
    }

    cout<<sum<<endl;
}
int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

