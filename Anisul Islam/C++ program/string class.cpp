#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1="MD. Imon";
    string str2 = " Hossain";
    string str3;

    str3 = str1;
    //string copy .
    cout<<"String 3 : "<<str3<<endl;

    str3 = str1 + str2;
    cout<<str3<<endl;

    int len = str1.size();
    cout<<"Lenght = "<<len<<endl;



    return 0;
}
