#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int count = 0, ans = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == 'x') count++;
        else if(str[i] != 'x' ){
           count = 0;
        }

        if(count >= 3) ans++;
        //cout<<"count: "<<count<<endl;
    }


    cout<<ans<<endl;





    return 0;
}
