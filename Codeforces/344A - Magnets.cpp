#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int count = 0, ans = 0;
    bool CP = true;

    /*
    for(int i = 0; i < n; i++){
        cin>>st[i];
    }*/

    for(int i = 0; i < n; i++){
            string st;
            cin>>st;
        if(st[0] == '1' && st[1] == '0' && CP){
            count++;
            CP = false;
            //cout<<"1st: "<<count<<endl;
        }
        else if(st[0] == '0' && st[1] == '1' && CP == false){
            count++;
            CP = true;
            //cout<<"2st: "<<count<<endl;
        }
        else if(i == 0 && st[0] == '0' && st[1] == '1'){
            count++;
            CP = true;
           // cout<<"3st: "<<count<<endl;
        }

    }


    cout<<count<<endl;




    return 0;
}
