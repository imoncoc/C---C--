#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    float n,count=0,age=0,sum=0;

    while(true)
    {
        cin>>n;
        if (n<=0)
        {
            break;
        }
        else
            count++;
            sum = sum+n;
    }

    age = sum/count;

    cout<<fixed<<setprecision(2)<<age<<endl;




    return 0;
}
