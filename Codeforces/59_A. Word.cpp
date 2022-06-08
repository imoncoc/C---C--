#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    int n = st.size();
    int count = 0;

    int lower = 0, upper = 0;

    for(int i = 0; i < n; i++){
        if(st[i] == tolower(st[i]) ){
          lower++;
        }
        else if( st[i] == toupper(st[i]) ){
                upper++;
                }
    }

    if(lower >= upper){
        transform(st.begin(), st.end(), st.begin(), ::tolower);
    }else{
        transform(st.begin(), st.end(), st.begin(), ::toupper);
    }


    //transform(st.begin(), st.end(), st.begin(), ::toupper);
   // cout<<"LowerCase: "<<lower<<endl;
   // cout<<"UpperCase: "<<upper<<endl;

    cout<<st<<endl;


    return 0;
}
