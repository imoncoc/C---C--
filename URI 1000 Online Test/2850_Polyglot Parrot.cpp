#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    while(cin>>str){
         cin.sync();
        if(str == "esquerda"){
            cout<<"ingles"<<endl;
        }else if(str == "direita"){
            cout<<"frances"<<endl;
        }
        else if(str == "nenhuma"){
            cout<<"portugues"<<endl;
        }
        else if(str == "as"){
            cout<<"caiu"<<endl;
        }
    }




    return 0;
}
