#include<bits/stdc++.h>
using namespace std;
int main(){
    string str[10];
    for(int i = 0; i < 10; i++){
        cin>>str[i];
    }

    for(int i = 0; i < 10; i++){
        if(i == 2 || i == 6 || i == 8){
            cout<<str[i]<<endl;
        }
    }



    return 0;
}


