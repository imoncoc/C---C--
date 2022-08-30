#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    string str1, str2, ans = "YES";
    cin>>str1>>str2;

    for(int i = 0; i < n; i++){
        if( (str1[i] == 'R' || str2[i] == 'R') && str1[i] != str2[i] ){
            ans = "NO";
            break;
        }
    }

    cout<<ans<<endl;
    }





    return 0;
}
