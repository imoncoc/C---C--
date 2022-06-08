#include<iostream>
using namespace std;
template <class myTemplate1, class myTemplate2>
myTemplate1 add(myTemplate1 a,myTemplate2 b)
{
    return a+b;
}

int main()
{

    cout<<"Integer : "<<add(10,20)<<endl;
    cout<<"Float : "<<add(10.5,20.4)<<endl;
    //we use two template for floate and integer.
    cout<<"Float : "<<add(10,20.4)<<endl;


    return 0;
}
