#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    vector<string> st;
    for(int i = 0; i < 3; i++){
            string s;
    cin>>s;
        st.push_back(s);
    }

    if(st[0][0] == st[0][1] && st[0][1] == st[0][2] && (st[0][0] == 'X' || st[0][0] == 'O' || st[0][0] == '+') ){
            if(st[0][0] )
        cout<<st[0][0]<<endl;
    }
    else if(st[0][1] == st[1][1] && st[1][1] == st[2][1] && (st[0][1] == 'X' || st[0][1] == 'O' || st[0][1] == '+') ){
        cout<<st[0][1]<<endl;
    }
    else if(st[0][2] == st[1][2] && st[1][2] == st[2][2] && (st[0][2] == 'X' || st[0][2] == 'O' || st[0][2] == '+') ){
        cout<<st[0][2]<<endl;
    }
    else if(st[0][0] == st[0][1] && st[0][1] == st[0][2] && (st[0][0] == 'X' || st[0][0] == 'O' || st[0][0] == '+' ) ){
        cout<<st[0][0]<<endl;
    }
    else if(st[1][0] == st[1][1] && st[1][1] == st[1][2] && (st[1][0] == 'X' || st[1][0] == 'O' || st[1][0] == '+' ) ){
        cout<<st[1][1]<<endl;
    }
    else if(st[2][0] == st[2][1] && st[2][1] == st[2][2] && (st[2][0] == 'X' || st[2][1] == 'O' ||  st[2][1] == '+' ) ){
        cout<<st[2][0]<<endl;
    }
    else if(st[0][0] == st[1][1] && st[1][1] == st[2][2] && (st[0][0] == 'X' || st[0][0] == 'O' || st[0][0] == '+' ) ){
        cout<<st[2][2]<<endl;
    }else if(st[0][2] == st[1][1] && st[1][1] == st[2][0] && (st[0][2] == 'X' || st[0][2] == 'O' || st[0][2] == '+' )){
        cout<<st[1][1]<<endl;
    }
    else{
        cout<<"DRAW"<<endl;
    }



}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

