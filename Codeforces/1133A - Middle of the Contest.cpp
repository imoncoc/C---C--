#include<bits/stdc++.h>
using namespace std;
int main(){
    int h1,m1,h2,m2,h3,h4, h5;
    char s;
    cin>>h1>>s>>m1;
    cin>>h2>>s>>m2;

    h3 = h1 * 60 + m1;
    h4 = h2 * 60 + m2;
    h5 = (h3 + h4)/2;
    int h = h5/60;
    int m = h5 % 60;
    if(h > 9 && m > 9){
        cout<<h<<":"<<m<<endl;
    }
    else{
        if(h < 10){
            cout<<0;
        }
        cout<<h<<":";
        if(m < 10){
            cout<<0;
        }
        cout<<m<<endl;
    }






    return 0;
}
