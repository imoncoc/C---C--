#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s1;
    stack<int>s2;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

//    cout<<"Before Swaping S1."<<endl;
//    while (!s1.empty())
//    {
//        cout<<s1.top()<<" ";
//        s1.pop();
//    }
//    cout<<endl;

    s2.push(10);
    s2.push(20);
    s2.push(30);
    s2.push(40);
    s2.push(50);

//    cout<<"Before Swaping S2."<<endl;
//    while (!s2.empty())
//    {
//        cout<<s2.top()<<" ";
//        s2.pop();
//    }
//    cout<<endl;

    s1.swap(s2);

    cout<<"After Swaping S1."<<endl;
    while (!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;

    cout<<"After Swaping S2."<<endl;
    while (!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;



    return 0;
}
