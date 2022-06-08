#include<iostream>
using namespace std;
int main()
{
    int a[]={11,22,36,5,2};
    int sum=0,*p;

    for (p=&a[0];p<=&a[4];p++)
    {
        sum+=*p;
    }
    cout<<"Sum is = "<<sum;

   /* Also can write like this.

   for (p=a;p<=a+4;p++)
    {
        sum+=*p;
    }
    cout<<"Sum is = "<<sum;
    */


    return 0;
}
