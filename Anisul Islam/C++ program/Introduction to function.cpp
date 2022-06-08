#include<iostream>
using namespace std;
void addition (int a, int b)
{
    int sum = a + b;
    cout<<"Sum = "<<sum<<endl;
}
void subtraction (int a, int b)
{
    int result = a - b;
    cout<<"Subtraction = "<<result<<endl;
}
void multiaplication (int a, int b)
{
    int result = a * b;
    cout<<"Multiaplication = "<<result<<endl;
}

void divisor (int a, int b)
{
    float result = (float)a / b;
    cout<<"Divisor = "<<result<<endl;
}



int main()
{
    addition(10,20);
    subtraction(100,200);
    multiaplication(50,230);
    divisor(33,75);


    return 0;
}
