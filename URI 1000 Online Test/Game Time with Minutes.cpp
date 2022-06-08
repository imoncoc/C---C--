#include<iostream>
using namespace std;
int main()
{
    int h1,m1,h2,m2,sum=0,sumHour=0,sumMin=0;

    cin>>h1>>m1>>h2>>m2;

    if (h1<h2)
    {
        sum = (h2*60+m2)-(h1*60+m1);
        sumHour = sum/60;
        sumMin = sum%60;

        cout<<"O JOGO DUROU "<<sumHour<<" HORA(S) E "<<sumMin<<" MINUTO(S)"<<endl;
    }
    else if (h1>h2)
    {
        sum = ((h2*60+m2)+1440)-(h1*60+m1);
        sumHour = sum/60;
        sumMin = sum%60;

        cout<<"O JOGO DUROU "<<sumHour<<" HORA(S) E "<<sumMin<<" MINUTO(S)"<<endl;

    }
    else if (h1==h2 && m1<m2)
    {
        sum = ((h1*60)+m1)-(h2*60)+m2;
        sumHour = sum/60;
        sumMin = sum%60;

        cout<<"O JOGO DUROU "<<sumHour<<" HORA(S) E "<<sumMin<<" MINUTO(S)"<<endl;
    }

    else if (h1==h2 && m1>m2)
    {
        sum = ((h2*60+m2)+1440)-(h1*60)+m1;
        sumHour = sum/60;
        sumMin = sum%60;

        cout<<"O JOGO DUROU "<<sumHour<<" HORA(S) E "<<sumMin<<" MINUTO(S)"<<endl;
    }
    else if (h1==h2 && m1==m2)
    {
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;

    }







    return 0;
}

