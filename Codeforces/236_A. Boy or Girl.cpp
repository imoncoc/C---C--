#include<iostream>
#include<string>
using namespace std;
int main(){
    string st;
    cin>>st;
    string res = "";
    int count = 0;

    for(int i = 0; i < st.size(); i++){
            int have = 0;
        for(int j = i+1; j < st.size(); j++){
            if(st[i] == st[j]) have++;
        }

    if(have == 0) count++;
    }

    if(count % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
         cout<<"IGNORE HIM!"<<endl;
    }



    return 0;
}
