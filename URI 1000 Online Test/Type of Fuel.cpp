#include<iostream>
using namespace std;
int main()
{
    int n,Alcohol=0,Gasoline=0,Diesel=0,i;

    while(true)
    {
        cin>>n;

        if (n==1)
        {
            Alcohol+=1;
        }
        else if (n==2)
        {
            Gasoline+=1;
        }
        else if (n==3)
        {
            Diesel+=1;
        }
        else if (n==4)
        {
            break;
        }

    }


    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<Alcohol<<endl;
    cout<<"Gasolina: "<<Gasoline<<endl;
    cout<<"Diesel: "<<Diesel<<endl;

    return 0;
}
