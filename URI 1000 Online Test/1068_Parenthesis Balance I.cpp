#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    string line;

    while(getline(cin, line)){
        size = line.length();

        stack<char> str;

        for(int i = 0; i < size; ++i){
            if(line[i] == '('){
                str.push(i);
               }
            if(line[i] == ')'){
                if(!str.empty()){
                    str.pop();
                }else{
                    str.push(i);
                }
            }
        }

        if(str.empty()){
            cout<<"correct"<<endl;
        }else{
            cout<<"incorrect"<<endl;
        }
    }



    return 0;
}
