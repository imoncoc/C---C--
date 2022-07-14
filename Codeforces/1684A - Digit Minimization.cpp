#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    std::string str = std::to_string(n);
    string one;


    int ans;


    if(str.size() == 2){
    one = str[1];
    ans = std::stoi(one);
    cout<<ans<<endl;
    }
    else{
        sort(str.begin(), str.end());
        one = str[0];
        ans = std::stoi(one);
        cout<<ans<<endl;
    }
    }





    return 0;
}
