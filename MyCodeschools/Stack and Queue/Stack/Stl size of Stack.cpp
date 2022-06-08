#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    cout<<"Size is : "<<s.size()<<endl;
    cout<<"Top number is : "<<s.top()<<endl;



    return 0;
}
