#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;

    s.push(100);
    s.push(200);
    s.push(300);

    //number are 100,200,300

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;//after pop element last element will show.
    s.pop();
    cout<<s.top()<<endl;

}
