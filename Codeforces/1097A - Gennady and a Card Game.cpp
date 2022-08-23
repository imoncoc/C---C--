#include<bits/stdc++.h>
using namespace std;
int main(){
    string str, ans = "NO";
    cin>>str;

    for(int i = 0; i < 5; i++){
        string st;
        cin>>st;

        if(st[0] == str[0]) ans = "YES";
        if(st[1] == str[1]) ans = "YES";
    }

    cout<<ans<<endl;




    return 0;
}
