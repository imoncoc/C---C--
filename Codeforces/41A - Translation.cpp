#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    string str2;
    cin>>str1>>str2;

    int count = 0;
    int n = str1.size();


    for(int i = 0; i < str1.size(); i++){
        if(str1[i] == str2[n-1]){
                n--;
            count++;
        }
    }


    if(count == str1.size() && count == str2.size()){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }




    return 0;
}
