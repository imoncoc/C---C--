#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n,s=0,sum=0;
    int i,j;

    for (i=1,j=1;i<=39;i+=2)
    {
        s+=(float)i/j;
        //cout<<i<<"/"<<j<<"+"<<endl;
        sum = j+j;
        j=sum;

    }

    cout<<fixed<<setprecision(2)<<s<<endl;



    return 0;
}
