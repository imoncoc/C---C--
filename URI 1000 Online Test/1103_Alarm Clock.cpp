
#include<bits/stdc++.h>
using namespace std;
int main(){
    int h1,m1,h2,m2;

    while(cin>>h1>>m1>>h2>>m2){
        int sum = 0;
            if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
                exit(0);
            }



     if(h1 < h2){

        sum = h2 * 60 + m2 -(h1 * 60 + m1);

    }else if(h1 == h2){
        if(m1 == m2){
            sum = 24 * 60;
        }else if(m1 < m2){
            sum = m2 - m1;
        }else if (m1 > m2){
            sum = (24 * 60) - (m1 - m2);
        }
    }
    else if(m1 > m2){
        sum = (24*60) - ( ( (h1*60) + m1) - ((h2*60) + m2) );
    }

    cout<<sum<<endl;

    }





    return 0;
}
