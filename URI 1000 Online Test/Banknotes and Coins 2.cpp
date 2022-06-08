#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int hundred = 0, fifty= 0, twinty = 0,ten=0,five=0,two=0,one=0,temp;
    int dfifty=0,dtwintyfive=0,dten=0,dfive=0,done=0,money=0;
    double n;

    cin>>n;
    money = n*100;
    temp=money;

    hundred = money/10000;
    money = money%10000;
    fifty= money/5000;
    money = money %5000;
    twinty = money/2000;
    money = money%2000;
    ten = money/1000;
    money = money%1000;
    five = money/500;
    money = money%500;
    two = money/200;
    money = money%200;
    one = money/100;
    money = money%100;
    dfifty= money/50;
    money=money%50;
    dtwintyfive=money/25;
    money=money%25;
    dten=money/10;
    money=money%10;
    dfive=money/5;
    money=money%5;
    done=money/1;
    money=one;


    cout<<"NOTAS: "<<endl;
    cout<<hundred<<" nota(s) de R$ 100.00"<<endl;
    cout<<fifty<<" nota(s) de R$ 50.00"<<endl;
    cout<<twinty<<" nota(s) de R$ 20.00"<<endl;
    cout<<ten<<" nota(s) de R$ 10.00"<<endl;
    cout<<five<<" nota(s) de R$ 5.00"<<endl;
    cout<<two<<" nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS: "<<endl;
    cout<<one<<" moeda(s) de R$ 1.00"<<endl;
    cout<<dfifty<<" moeda(s) de R$ 0.50"<<endl;
    cout<<dtwintyfive<<" moeda(s) de R$ 0.25"<<endl;
    cout<<dten<<" moeda(s) de R$ 0.10"<<endl;
    cout<<dfive<<" moeda(s) de R$ 0.05"<<endl;
    cout<<done<<" moeda(s) de R$ 0.01"<<endl;



        return 0;
}

