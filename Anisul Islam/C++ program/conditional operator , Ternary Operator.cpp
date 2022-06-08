#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{
    int num1=20,num2=400,max;
    //conditional operator / Ternary Operator.
    max= (num1>num2) ? num1:num2;

    cout<<max;

    cout<<"\nA new Program : \n";
    int n;
    cout<<"Enter any integer : ";
    cin>>n;

    (n%2==0)?cout<<"Even number.":cout<<"Odd number.";




    getch();
}
