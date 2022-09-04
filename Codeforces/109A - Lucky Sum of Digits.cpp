#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int seven = 0, four = 0;

    if(n % 7 == 0){
        seven = n/7;
    }
    else if(n % 7 == 4){
        seven = n / 7;
        four = 1;
    }
    else if(n % 7 == 1 && n >= 29 ){
        seven = (n-8) / 7;
        four = 2;
    }
    else if(n % 7 == 2 && n > 30){
        seven = (n - 16) / 7;
        four = 4;
    }
    else if(n % 7 == 3 && n > 30){
        seven = (n - 24) / 7;
        four = 6;
    }
    else if(n % 7 == 5 && n > 30){
        seven = (n-12)/7;
        four = 3;
    }

    else if(n % 7 == 6 && n > 30){
        seven = (n-20)/7;
        four = 5;
    }

    else if(n % 4 == 0){
        four = n / 4;
    }
    else if(n % 4 == 3 && n > 10){
        four = (n - 7) / 4;
        seven = 1;
    }
    else if(n % 4 == 1 && n > 40){
        four = (n - 21) / 4;
        seven = 3;
    }
    else{
        cout<<-1<<endl;
    }

    for(int i = 0; i < four; i++){
        cout<<4;
    }
    for(int i = 0; i < seven; i++){
        cout<<7;
    }





    return 0;
}
