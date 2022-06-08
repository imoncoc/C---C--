#include<iostream>
using namespace std;
int main()
{
    int n,i,x,j;

    while(true)

    {
        int count=0;
    cin>>n;

    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }

    if (count==0)
    {
        cout<<n<<" eh primo"<<endl;
    }
    else{
        cout<<n<<" nao eh primo"<<endl;
    }
    }






    return 0;
}
