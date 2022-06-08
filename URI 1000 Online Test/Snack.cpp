#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;

    double cac=4,xsala=4.50,xbac=5,tor=2,refr=1.50,temp=0;

    if (x==1)
    {
       temp=cac*y;
       cout<<fixed;
       cout<<setprecision(2)<<"Total: R$ "<<temp<<endl;
    }
    else if (x==2)
    {
        temp=xsala*y;
        cout<<fixed;
       cout<<setprecision(2)<<"Total: R$ "<<temp<<endl;
    }
    else if(x==3)
    {
        temp=xbac*y;
        cout<<fixed;
       cout<<setprecision(2)<<"Total: R$ "<<temp<<endl;
    }
    else if(x==4)
    {
        temp=tor*y;
        cout<<fixed;
       cout<<setprecision(2)<<"Total: R$ "<<temp<<endl;
    }
    else if(x==5)
    {
        temp=refr*y;
        cout<<fixed;
       cout<<setprecision(2)<<"Total: R$ "<<temp<<endl;
    }




    return 0;
}
