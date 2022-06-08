#include<iostream>
using namespace std;
int main()
{
    int n,i,j,num1[100],num2[100],count=0;

    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>num1[i];
    }
//    for (i=0; i<n; i++)
//    {
//        cout<<"N[i]"<<num1[i]<<endl;
//        num1[i]=num2[j];
//
//    }



    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {

            if (num1[i]>num2[j])
            {
                count++;
            }

        }
    }
    cout<<"Count : "<<count<<endl;
    if (count==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }



    return 0;
}
