#include<iostream>

using namespace std;

template<typename T>
T add(T a,T b)
{
   return a+b;
}

int main()
{
    int x=10;
    int y=20;

    float a=20.20;
    float b=10.20;

    cout<<add<int>(x,y)<<endl;
    cout<<add<float>(a,b)<<endl;

    return 0;
}
