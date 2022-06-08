#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     float a,b;

     cout<<showpoint; // for print .00000
     cout<<fixed; // to fixed setprecision
     cout<<setprecision(2); // how many .000 you want

    cout<<"Enter number1  and number2 : ";
    cin>>a>> b;

    float sum=a+b;
    cout <<setw(20)<<"Sum = "<<sum<<endl;

    float sub=a-b;
    cout <<setw(20)<<"Subtraction = "<<sub<<endl;

    float mul=a*b;
    cout <<setw(20)<<"Multiaplications = "<<mul<<endl;

    double dev=(float)a/b;
    cout <<setw(20)<<"Divitions = "<<dev<<endl;






    return 0;



}
