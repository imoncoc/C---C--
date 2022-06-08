#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;

    s.push(10);

    if (s.empty())
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }



    return 0;
}

