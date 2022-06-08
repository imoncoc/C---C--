#include<iostream>
using namespace std;
int main(){
    string dayA, dayB, dot;
    int dayTimeA, dayTimeB;
    int hourA, hourB, minA, minB, secA, secB;

    cin>>dayA>>dayTimeA;
    cin>>hourA>>minA>>secA;

    cin>>dayB>>dayTimeB;
    cin>>hourB>>minB>>secB;

    cout<<dayA<<dayTimeA<<endl;
    cout<<hourA<<minA<<secA<<endl;
    cout<<dayB<<dayTimeB<<endl;
    cout<<hourB<<minB<<secB<<endl;


    return 0;
}
