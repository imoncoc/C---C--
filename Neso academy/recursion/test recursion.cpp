#include<iostream>
using namespace std;

void sum(int n)
{
    if (n>=1)
    {
        sum(n - 1);
        cout<<n<<" ";
    }

}


int main()
{
     sum(2);
    return 0;
}
