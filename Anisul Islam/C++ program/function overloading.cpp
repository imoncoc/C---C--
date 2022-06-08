#include<iostream>
using namespace std;
void display (int x,int y)
{
   int  sum=x+y;
    cout<<"Sum = "<<sum<<endl;
}

void display (int x,int y,int z)
{
   int  sum=x+y+z;
    cout<<"Sum = "<<sum<<endl;
}
void display (int x)
{
    cout<<"X = "<<x<<endl;
}
void display (double x)
{
    cout<<"X = "<<x<<endl;
}


int main()
{
    display(10,20,30);
    display(10,20);

    display(50);
    display(100.04);



    return 0;
}

