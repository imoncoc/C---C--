#include<iostream>
using namespace std;
int main()
{
    try{

    int num1,num2;
    cout<<"Enter First number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;

    if (num2==0)
    {
        throw -1;
    }

    double result = (double)num1/num2;

    cout<<"Result = "<<result<<endl;

    }
    catch (int x)
    {
        cout<<"Divite by zero is not possible."<<endl;
        cout<<"Please try again."<<endl;
    }





    return 0;
}
