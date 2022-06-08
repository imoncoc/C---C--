#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int hour, minite, onClose;
        cin>>hour>>minite>>onClose;
        if(onClose == 1){
                cout<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<minite<<" - A porta abriu!"<<endl;
        }
        if(onClose == 0){
            cout<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<minite<<" - A porta fechou!"<<endl;
        }
    }




return 0;
}
