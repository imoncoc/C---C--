#include<iostream>
using namespace std;
int main()
{
    int i,j;

    for (j=7,i=1;j>=5;j-=1)
    {
        cout<<"I="<<i<<" "<<"J="<<j<<endl;
        if (j==5)
        {
           cout<<"I="<<i+2<<" "<<"J="<<j+2<<endl;
        }

    }



    return 0;
}
