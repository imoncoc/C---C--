#include<iostream>
#include<string>
#include <cctype>
using namespace std;
int main(){
    string st;
    cin>>st;
    string res = "";

    for(int i = 0; i < st.size(); i++){
        if(i == 0){
            res += toupper(st[i]);
        }else{
            res += st[i];
        }
    }

    cout<<res<<endl;



    return 0;
}
