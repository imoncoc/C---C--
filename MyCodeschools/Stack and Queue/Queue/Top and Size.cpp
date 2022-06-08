#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"Top number :  "<<q.top()<<endl;
    cout<<"Queue Size :  "<<q.size()<<endl;

    return 0;
}
