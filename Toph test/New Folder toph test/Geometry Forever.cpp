#include<iostream>
using namespace std;
int main()
{
    int a,b,c,count=0,i;
    cout<<"Enter A : ";
    cin>>a;
    cout<<"Enter B : ";
    cin>>b;
     c = a + b;

       for (i=0;i<c;i++)
       {
           if ((a+b)>c && (a+c)>b && (b+c)>a)
            count++;
       }
       cout<<c;



    return 0;
}
