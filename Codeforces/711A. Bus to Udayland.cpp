#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string seats[n];
    for(int i = 0; i < n; i++){
        cin>>seats[i];
    }

    //cout<<endl;
    bool flag = false;
    for(int i = 0; i < n; i++){
            for(int j = 0; j < 5; j++){
                    if(flag == false){
                        if(seats[i][0] == 'O' && seats[i][1] == 'O'){
                        seats[i][0] = '+';
                        seats[i][1] = '+';
                        flag = true;

                    }
                    else if(seats[i][3] == 'O' && seats[i][4] == 'O' ){
                        seats[i][3] = '+';
                        seats[i][4] = '+';
                        flag = true;

                    }
                    }
                //cout<<seats[i][j]<<" ";
            }
       // cout<<endl;
    }

    if(flag){
        cout<<"YES"<<endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 5; j++){
                cout<<seats[i][j];
            }
        cout<<endl;
    }
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t = 1;
    while(t--){
        solve();
    }


    return 0;
}
