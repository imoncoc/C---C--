#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[9];
    for(int i = 0; i < 8; i++){
        cin>>a[i];
    }

    cout<<a[3]<<a[4]<<"/"<<a[0]<<a[1]<<"/"<<a[6]<<a[7]<<endl;
    cout<<a[6]<<a[7]<<"/"<<a[3]<<a[4]<<"/"<<a[0]<<a[1]<<endl;
    cout<<a[0]<<a[1]<<"-"<<a[3]<<a[4]<<"-"<<a[6]<<a[7]<<endl;


    return 0;
}
