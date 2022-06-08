#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your mark :";
    cin>>n;

    if (n>=80 && n<=100)
    {
        cout<<"Your Grade is = A+";
    }

    else if (n>=70 && n<=79)
    {
        cout<<"Your Grade is = A";
    }
   else if (n>=60 && n<=69)
    {
        cout<<"Your Grade is = A-";
    }
   else if (n>=50 && n<=59)
    {
        cout<<"Your Grade is = B";
    }
  else if (n>=40 && n<=49)
    {
        cout<<"Your Grade is = C";
    }
    else if (n>=33 && n<=39)
    {
        cout<<"Your Grade is = D";
    }
    else if (n>=0 && n<=32)
    {
        cout<<"Your Grade is = Fail";
    }

    else
    {
        cout<<"Invalid input";
    }


    getch();
}
