#include<iostream>
using namespace std;
int main()
{
    int d1,h1,m1,s1,d2,h2,m2,s2,sum=0,hour,minite,second, startMin, endMin,startDay,endDay,startsecond,endsecond;

    cout<<"Dia ";
    cin>>d1;

    cin>>h1;
    cout<<" : ";
    cin>>m1;
    cout<<" : ";
    cin>>s1;

    cout<<"Dia ";
    cin>>d2;

    cin>>h2;
    cout<<" : ";
    cin>>m2;
    cout<<" : ";
    cin>>s2;

    d1=startDay;
    d2=endDay;

    if (endDay>startDay)
    {
        sum = endDay-startDay;

        cout<<sum<<" dia(s)"<<endl;
    }
    else
    {
     cout<<"0 dia(s)"<<endl;
    }

    startsecond = (h1*3600)+m1*60+s1;
    endsecond = (h2*3600)+m2*60+s2;

    if (endsecond>startsecond)
    {
        sum = endsecond-startsecond;
        hour = sum/3600;
        sum = sum%3600;
        minite = sum/60;
        sum = sum%60;
        second = sum;
        cout<<hour<<" hora(s)"<<endl;
        cout<<minite<<" minuto(s)"<<endl;
        cout<<second<<" segundo(s)"<<endl;
    }

    else if (startsecond>endsecond)
    {
        sum = (startsecond+86400)-endsecond;
        hour = sum/3600;
        sum = sum%3600;
        minite = sum/60;
        sum = sum%60;
        second = sum;
        cout<<hour<<" hora(s)"<<endl;
        cout<<minite<<" minuto(s)"<<endl;
        cout<<second<<" segundo(s)"<<endl;
    }
    else
    {
        cout<<"0 hora(s)"<<endl;
        cout<<"0 minuto(s)"<<endl;
        cout<<"0 segundo(s)"<<endl;
    }








    return 0;
}
