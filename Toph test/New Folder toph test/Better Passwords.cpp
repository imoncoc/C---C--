#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    string res;

    for(int i = 0; i < st.size(); i++){
        if(st[i] == 's'){
            res += '$';
        }else if(st[i] == 'i'){
            res += '!';
        }else if(st[i] == 'o'){
            res += '(';
            res += ')';
        }else{
            if( i == 0){
                res += toupper(st[i]);
            }else{
               res += st[i];
            }

        }
    }

    toupper(res[0]);
    res += '.';

    cout<<res;




return 0;
}
