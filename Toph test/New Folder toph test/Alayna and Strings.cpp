#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    int lower = 0, upper = 0;

    for(int i = 0; i < st.size(); i++){
        if(isupper(st[i])) upper++;
        else if(islower(st[i])) lower++;
    }


    cout<<upper<<" "<<lower<<endl;




    return 0;
}
