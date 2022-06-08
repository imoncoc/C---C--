#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,d,f,result,temp;
    double a1=2,b1=3,c1=4,d1=1;

    cin>>a>>b>>c>>d;
    result= ((a*a1)+(b*b1)+(c*c1)+(d*d1))/(a1+b1+c1+d1);

    cout<<fixed;
    cout<<setprecision(1)<<"Media: "<<result<<endl;

    if (result>=7)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if (result<5)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else //if (result<=5.0 && result>=6.9)
    {
        cout<<"Aluno em exame."<<endl;
        cin>>f;

        cout<<fixed;
        cout<<setprecision(1)<<"Nota do exame: "<<f<<endl;

        temp=(result+f)/2.0;

        if (temp>=5)
        {
            cout<<"Aluno aprovado."<<endl;
        }
        else
        {
            cout<<"Aluno reprovado."<<endl;
        }



        cout<<fixed;
        cout<<setprecision(1)<<"Media final: "<<temp<<endl;

    }



    return 0;
}
