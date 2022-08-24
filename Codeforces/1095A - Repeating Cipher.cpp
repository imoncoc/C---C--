#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str, ans;
    cin>>str;

    for(int i = 0; i < n; i++){
        if(i == 0 || i == 1 || i == 3 || i == 6 || i == 10 || i == 15 || i == 21 || i == 28||
           i == 36 || i == 45){
            ans += str[i];
           }
    }

    cout<<ans<<endl;

    //for(int i = 0; i< n; i++){
       // cout<<i<<": "<<str[i]<<endl;
    //}







    return 0;
}
