#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
    cin>>num;
    auto str = std::to_string(num);
    int n = str.size();

    int ans = (num / pow(10, n) ) * 10;
    ans = (ans-1) * 10;
    //cout<<"pow: "<<pow(10, n)<<endl;
    //cout<<"ans: "<<ans<<endl;

    if(n == 1) ans += 1;
    if(n == 2) ans += 3;
    if(n == 3) ans += 6;
    if(n == 4) ans += 10;

    cout<<ans<<endl;
    }






    return 0;
}
