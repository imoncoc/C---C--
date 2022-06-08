#include<iostream>
using namespace std;
int main()
{
    int y,z,i,n,j;

    cin>>n;

    for(j=0;j<n;j++)
    {
     cin>>y;
    cin>>z;
     int sum=0;

    if (y%2==0)
    {
        y+=1;
    }
    for (i=y;i<(y+(z+z));i+=2)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    }






    return 0;
}
