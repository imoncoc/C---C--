#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        if(a == 0 || b == 0){
            exit(0);
        }

        if (a > 0 && b > 0){
            cout<<"primeiro"<<endl;
        }
        else if (a > 0 && b < 0){
            cout<<"quarto"<<endl;
        }
        else if (a < 0 && b < 0){
            cout<<"terceiro"<<endl;
        }
        else if (a < 0 && b > 0){
            cout<<"segundo"<<endl;
        }
    }


    return 0;
}
