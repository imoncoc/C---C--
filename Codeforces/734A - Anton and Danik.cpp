#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char st[n];

    for(int i = 0; i < n; i++){
        cin>>st[i];
    }

    int anton = 0, danik = 0;

    for(int i = 0; i < n; i++){
        if(st[i] == 'A') anton++;
        else danik++;
    }

    if(anton > danik ){
        cout<<"Anton"<<endl;
    }
    else if(anton < danik ){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }





    return 0;
}

