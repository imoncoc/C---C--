#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    int count0 = 0, count1 = 0, ans = 0;

    for(int i = 0; i < st.size(); i++){
        if(st[i] == '0'){
            count0++;
            count1 = 0;
            if(ans < count0){
                ans = count0;
            }
        }else{
            count1++;
            count0 = 0;
            if(ans < count1){
                ans = count1;
            }
        }
    }


    if(ans >= 7){
        cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;
    }


    return 0;
}
