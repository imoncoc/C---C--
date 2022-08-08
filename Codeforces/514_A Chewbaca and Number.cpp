#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int n = st.size();

    for(int i = 0; i < n; i++){
        if( i == 0 && st[i] == '9' || st[i] < '5'){
            cout<<st[i];
        }
        else{
            cout<<abs('9' - st[i]);
        }
    }








    return 0;
}
