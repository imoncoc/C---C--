#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n,sum=0,salary=0;
    cin>>n;


    if (n>=0 && n<=400)
    {
        sum = (n/100)*15;
        salary = n+sum;

        cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<sum<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }

    else if (n>400 && n<=800)
    {
        sum = (n/100)*12;
        salary = n+sum;

        cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<sum<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }

    else if (n>800 && n<=1200)
    {
        sum = (n/100)*10;
        salary = n+sum;

        cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<sum<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }

    else if (n>1200 && n<=2000)
    {
        sum = (n/100)*7;
        salary = n+sum;

        cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<sum<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if (n>2000)
    {
        sum = (n/100)*4;
        salary = n+sum;

        cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<sum<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }



    return 0;
}

