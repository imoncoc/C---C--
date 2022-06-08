#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n,sum=0;
    int i;

    for (i=0;i<2;i++)

    {
        cin>>n;
        if (n>=0 && n<=10)
        {
            sum=sum+n;
        }
        else
        {

            cout<<"nota invalida"<<endl;
            i--;
        }
}

   cout<<fixed<<setprecision(2)<<"media = "<<sum/2<<endl;



    return 0;
}
