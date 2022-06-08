#include<iostream>
using namespace std;
void display (int a=10,int b=20)
{
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
}

int main()
{
    //work void
     display();
     //you can change void function by input new functions.
     display(50,100);


    return 0;
}
