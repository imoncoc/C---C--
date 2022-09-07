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
    string ans = "YES";

    for(int i = 0; i < n/2; i++){
            int left = str[i];
    int right = str[n-i-1];
    //cout<<"left: "<<left<<endl;
    //cout<<"right: "<<right<<endl;
        //cout<<"left: "<<str[i]<<endl;
        //cout<<"right: "<<str[n-i - 1]<<endl;

        if(left == right || left + 2 == right || left-2 == right || left == right+2 || left == right-2 ){
            continue;
        }
        else{
            ans = "NO";
            break;
        }
    }

    cout<<ans<<endl;
    }





    return 0;
}
