#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;

    q.push(1);

    if (q.empty())
    {
        cout<<"True"<<endl;
    }
    else
    {
       cout<<"False"<<endl;
    }


    return 0;
}
