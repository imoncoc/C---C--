#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    for (int i = 0; i < n; i++){
        int m;
        cin>>m;

        if(m > 8000){
            cout<<"Mais de 8000!"<<endl;
        }
        else{
            cout<<"Inseto!"<<endl;
        }
    }



    return 0;
}
