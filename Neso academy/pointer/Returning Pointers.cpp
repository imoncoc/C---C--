#include<iostream>
using namespace std;
int *findMid(int a[],int len)
{
    return &a[len/2];
    }


int main()
{
    int a[]={10,20,30,4,50,60,78};

    int len = sizeof(a)/ sizeof (a[0]);

    int *mid = findMid(a,len);

    cout << *mid;





    return 0;
}

