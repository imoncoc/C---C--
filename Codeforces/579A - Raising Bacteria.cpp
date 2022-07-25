#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cin>>n;
    bitset<32> ans = n;
    cout<<ans.count()<<endl;

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }







    return 0;
}
