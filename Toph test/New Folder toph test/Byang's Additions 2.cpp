#include<iostream>
using namespace std;
int main()
{
    int num1,num2,i,r,temp,sum=0;

     cout<<"Enter any interger for number 1 : ";
    cin>>num1;
    cout <<"Input Is : "<<num1<<endl;

    cout<<"Enter any interger for number 2 : ";
    cin>>num2;
    cout <<"Input Is : "<<num2<<endl;

    for (i=0;i<num2;i++)
    {
         r=temp%10;
        sum=sum+r;
        temp=temp/10;
        i++;
        cout<<i;
    }


    return 0;
}
