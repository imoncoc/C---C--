#include<bits/stdc++.h>
using namespace std;
int main(){

            int ans, player1, player2, cheat1, accuse2, sum = 0;

    cin>>ans>>player1>>player2>>cheat1>>accuse2;
    sum = player1 + player2;

    if(cheat1 == 1){
        if(accuse2 == 1){
            cout<<"Jogador 2 ganha!"<<endl;
        }
        else{
            cout<<"Jogador 1 ganha!"<<endl;
        }
    }
    else if(accuse2 == 1){
        cout<<"Jogador 1 ganha!"<<endl;
    }
    else if( (sum % 2 == 0 && ans == 1)|| sum % 2 == 1 &&
            ans == 0 ){
                cout<<"Jogador 1 ganha!"<<endl;
            }
            else{
                cout<<"Jogador 2 ganha!"<<endl;
            }





    return 0;
}
