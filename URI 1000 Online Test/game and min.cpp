#include<iostream>
using namespace std;
int main()
{
    int h1,m1,h2,m2,sum=0,sumHour=0,sumMin=0, startMin, endMin;

    cin>>h1>>m1>>h2>>m2;

    startMin = (h1*60+m1);
    endMin = (h2*60+m2);

    if (endMin <= startMin)
    {
        sum = endMin + (24*60 - startMin);
    }
    else
    {
        sum = endMin - startMin;
    }

    sumHour = sum/60;
    sumMin = sum%60;

    cout<<"O JOGO DUROU "<<sumHour<<" HORA(S) E "<<sumMin<<" MINUTO(S)"<<endl;


    return 0;
}


