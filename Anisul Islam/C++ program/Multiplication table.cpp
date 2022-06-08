#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter any integer : ";
    cin>>n;

    for (i=1;i<=10;i++)
    {
        sum=n*i;
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }


    getch();
}
