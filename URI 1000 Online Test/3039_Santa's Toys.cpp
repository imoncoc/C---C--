#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int F = 0, M = 0;
    string myStr;
    char str[n];

    for(int i = 0; i < n; i++){
        cin>>myStr>>str[i];
        if(str[i] == 'F'){
            F++;
        }
        else if(str[i] == 'M'){
            M++;
        }
    }

    cout<<M<<" carrinhos"<<endl;
    cout<<F<<" bonecas"<<endl;


    return 0;
}
