#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,num1,i,sum=0,Coelho=0,Rat=0,Sapo=0;
    string animal;

    cin>>n;

    for (i=0; i<n; i++)
    {
        cin >> num1 >> animal;
        sum = sum + num1;

        if (animal == "C")
        {
            Coelho = Coelho + num1;
        }

        else if (animal == "R")
        {
            Rat=Rat+num1;
        }
        else if (animal == "S")
        {
            Sapo=Sapo+num1;
        }

    }

    cout<<"Total: "<<sum<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<Coelho<<endl;
    cout<<"Total de ratos: "<<Rat<<endl;
    cout<<"Total de sapos: "<<Sapo<<endl;

    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<((float)100/sum)*Coelho<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<((float)100/sum)*Rat<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<((float)100/sum)*Sapo<<" %"<<endl;


    return 0;
}

