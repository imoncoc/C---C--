#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    getline(cin, st);
    int count = 0;

    for(int i = 0; i < st.size(); i++){
        if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' ||
           st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U' ){
            count++;
           }
    }

    cout<<count<<endl;





    return 0;
}
