#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    int sum;

    s.push(10);
    s.push(20);
    s.push(30);

    //stack become 10,20,30

    while(!s.empty())
    {
        sum+=s.top();
        s.pop();
    }

    cout<<sum;



    return 0;
}
