#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>q;
    int sum=0;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while (!q.empty())
    {
         sum=sum+q.top();
        q.pop();
    }

  cout<<sum<<endl;


    return 0;
}
