#include<iostream>
using namespace std;
int main()
{
    int n[10],i;

    for (i=0;i<10;i++)
    {
        cin>>n[i];
        if (n[i]<=0)
        {
           cout<<"X["<<i<<"] = 1"<<endl;
        }
        else
        cout<<"X["<<i<<"] = "<<n[i]<<endl;
    }




    return(0);
}
