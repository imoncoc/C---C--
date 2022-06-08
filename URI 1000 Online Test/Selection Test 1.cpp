#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if (b>c && d>a && (c+d)>(a+b) &&c>=0 && d>=0 && a%2==0)
    {
        cout<<"Valores nao aceitos"<<endl;
    }
    /* if ((c+d)>(a+b))
    {
       cout<<"2 Valores nao aceitos"<<endl;
    }
    if (c%2==0 && d%2==0 && a%2==1)
    {
       cout<<"3 Valores nao aceitos"<<endl;
    }*/

    else
    {
        cout<<"Valores aceitos"<<endl;
    }




    return 0;
}
