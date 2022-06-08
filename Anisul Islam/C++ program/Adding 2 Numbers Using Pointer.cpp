#include<iostream>
using namespace std;
int main()
{
    int num1=10,num2=20;
    int *p1, *p2;

    p1=&num1;
    p2=&num2;

    int sum = *p1 + *p2;

    cout<<sum<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;



    return 0;
}
