#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string str[n];

    for(int i = 0; i < n; i++ ){
        for(int j = 0; j < m; j++){
            cin>>str[i][j];
        }
    }

    for(int i = 0; i < n; i++ ){
        for(int j = 0; j < m; j++){
            cout<<str[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
}
