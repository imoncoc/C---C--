#include "myfirstclasss.h"
#include<iostream>
using namespace std;
MyFirstclasss::MyFirstclasss()
{
    cout<<"Inside the constructor. "<<endl;
}
MyFirstclasss::~MyFirstclasss()
{
    cout<<"Destructor is called. "<<endl;
}

void MyFirstclasss ::display()
{
    cout<<"Inside display constractor."<<endl;
}
