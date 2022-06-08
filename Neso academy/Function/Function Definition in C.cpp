#include<iostream>
using namespace std;

int add(int a ,int b);

int main()
{
    int a=20,b=30;

    int sum = add(a,b);

    cout<<"Sum = "<<sum<<endl;



    return 0;
}

int add(int a, int b)
{
    return (a+b);
}
