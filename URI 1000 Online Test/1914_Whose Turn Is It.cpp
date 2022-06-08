#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    for ( int i = 0; i < n; i++){
        string str1, str2;
        string player1, player2;
        int num1, num2, sum = 0;

        cin>>str1>>player1>>str2>>player2;
        cin>>num1>>num2;

        sum = num1 + num2;

        if(sum % 2 == 0){
            if(player1 == "PAR"){
                cout<<str1<<endl;
            }else{
                cout<<str2<<endl;
            }
        }
        else{
            if(player1 == "IMPAR"){
                cout<<str1<<endl;
            }
            else{
                cout<<str2<<endl;
            }
        }
    }





    return 0;
}
