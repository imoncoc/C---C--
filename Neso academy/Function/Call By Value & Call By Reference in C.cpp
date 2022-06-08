#include<iostream>
using namespace std;

int add(int *m, int *n)
{
    * m = 20;
    * n = 10;

}


int main()
{
    int a = 10,b=20;

    add(&m, &n);
    cout<<a<<endl;
    cout<<b<<endl;



    return 0;
}
