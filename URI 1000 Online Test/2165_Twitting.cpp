#include<iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin, str);

    if(str.size() > 140){
        cout<<"MUTE"<<endl;
    }else{
        cout<<"TWEET"<<endl;
    }



return 0;
}
