#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    int n = st.size();
    int count = 0;


    for(int i = 0; i < n; i++){
        if(st[i] == 'H' || st[i] == 'Q' || st[i] == '9'){
            count++;
        }

    }

    if(count >= 1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }




    return 0;
}
