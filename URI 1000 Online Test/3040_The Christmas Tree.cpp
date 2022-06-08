#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int h,d, g;
    cin>>h>>d>>g;

    if(h >= 200 && h <= 300){
        if(d >= 50){
            if(g >= 150){
                cout<<"Sim"<<endl;
            }
            else{
                cout<<"Nao"<<endl;
            }
        }
        else{
            cout<<"Nao"<<endl;
        }
    }
    else{
        cout<<"Nao"<<endl;
    }

    }


    return 0;
}
