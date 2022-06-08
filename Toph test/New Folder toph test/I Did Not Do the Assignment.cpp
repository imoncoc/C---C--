#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0,j;
    //cout<<"Enter any integer : ";
    cin>>n;

 for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            count++;
            break;

        }

    }
    if (count==0)
        cout<<"NO PUNISHMENT"<<endl;
    else
       {
           for (j=0;j<n;j++)
           {
               cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
           }
       }

    return 0;
}
