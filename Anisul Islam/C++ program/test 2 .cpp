#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int money = 0, hundred = 0, fifty= 0, twinty = 0,ten=0,five=0,two=0,one=0;
    double dfifty=0,dtwintyFive=0,dten=0,dfive=0,done=0;
    cin>>money;


    hundred = money/100;
    money = money%100;
    fifty= money/50;
    money = money %50;
    twinty = money/20;
    money = money%20;
    ten = money/10;
    money = money%10;
    five = money/5;
    money = money%5;
    two = money/2;
    money = money%2;
    one = money;
    money=money%1;
    dfifty=(double)money/0.50;
    (double)money=(double)money%0.50;
    dtdtwintyFive = money/0.25;
    money = money%0.25;
    dten= money/0.10;
    money = money%0.10;
    dfive = money/0.05;
    money = money%0.05;
    done = money;

    cout<<"NOTAS:"<<endl;
    cout<<hundred<<" nota(s) de R$ 100,00"<<endl;
    cout<<fifty<<" nota(s) de R$ 50,00"<<endl;
    cout<<twinty<<" nota(s) de R$ 20,00"<<endl;
    cout<<ten<<" nota(s) de R$ 10,00"<<endl;
    cout<<five<<" nota(s) de R$ 5,00"<<endl;
    cout<<two<<" nota(s) de R$ 2,00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<one<<" moeda(s) de R$ 1.00"<<endl;
    cout<<dfifty<<" moeda(s) de R$ 0.50"<<endl;
    cout<<dtwintyFive<<" moeda(s) de R$ 0.25"<<endl;
    cout<<dten<<" moeda(s) de R$ 0.10"<<endl;
    cout<<dfive<<" moeda(s) de R$ 0.05"<<endl;
    cout<<done<<" moeda(s) de R$ 0.01"<<endl;




        return 0;
}
