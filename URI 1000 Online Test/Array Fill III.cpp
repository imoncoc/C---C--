#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n,a[105];
    int i;
    cin>>n;

    for (i=0;i<101;i++)

    {
        cout<<"N["<<i<<"] = ";
        cout<<fixed<<setprecision(4)<<n<<endl;
        n=n/2;
    }



    return 0;
}
