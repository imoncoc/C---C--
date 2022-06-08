#include<bits/stdc++.h>
using namespace std;
int main(){
    int carGo = 0, carBack = 0, carGoSum = 0, carBackSum = 0, n;
    string str;
    while(cin>>str){
            cin.ignore();

        if(str == "ABEND"){
            break;
        }
        cin>>n;
        if(str == "SALIDA"){
            carGoSum += n;
            carGo++;
        }else if(str == "VUELTA"){
            carBackSum += n;
            carBack++;
        }
    }

    cout<<carGoSum - carBackSum<<endl;
    cout<<carGo - carBack<<endl;



    return 0;
}
