#include<iostream>
#include <sstream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string st[n];


    for(int i = 0; i < n; i++){
        cin>>st[i];
    }

    for(int i = 0; i < n; i++){
            if(st[i].size() > 10){
                cout<<st[i][0]<<st[i].size() - 2<<st[i][st[i].size() - 1]<<endl;
            }
            else{
                cout<<st[i]<<endl;
            }

    }




    return 0;
}
