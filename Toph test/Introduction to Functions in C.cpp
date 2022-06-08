#include<iostream>
using namespace std;
int areaOfRct (int a,int b)
{
    int area;
    area = a*b;


    return area;
}



int main()
{
    int a=10,b=20;

    int area = areaOfRct(a,b);

    cout<<area<<endl;

    a=25,b=5;

    area = areaOfRct(a,b);

    cout<<area<<endl;

    return 0;
}
