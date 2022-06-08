#include<iostream>
using namespace std;
int main()
{
    int a=4,b=3,sum;

        cout<<a+++b<<endl;

     sum= (a>b)||(b++);
     //b won't work because (a>b) work that's why (b++) no need to check.
     cout<<"Sum = "<<sum<<endl;
     cout<<"B = "<<b<<endl;

     sum= (a<b)||(b++);
     //b will work because (a<b) won't work this case
     cout<<"Sum Again = "<<sum<<endl;
     cout<<"B Again = "<<b<<endl;


    return 0;
}
