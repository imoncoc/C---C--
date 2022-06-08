#include<iostream>
using namespace std;
int main(){
    int var = 10;
    int* ptr = &var;

    cout << "Value of: "<< *ptr<<endl;
    cout << "Address of: "<< ptr<<endl;
    cout<<&var<<endl;
    cout << "Address of: "<< &ptr<<endl<<endl;

    var = 20;
     cout << "Value of: "<< *ptr<<endl;
    cout << "Address of: "<< ptr<<endl;
    cout << "Address of: "<< &ptr<<endl<<endl;

    *ptr = 30;
    cout << "Value of: "<< *ptr<<endl;
    cout << "Address of: "<< ptr<<endl;
    cout << "Address of: "<< &ptr<<endl;
    return 0;
}
