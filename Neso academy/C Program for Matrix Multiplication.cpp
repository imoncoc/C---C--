#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],martix[10][10];
    int aRows,aCol,bRows,bCol,i,j,k,sum=0;

    cout<<"How many Rows and Col for 1st : ";
    cin>>aRows>>aCol;

    cout<<"How many Rows and Col for 2nd : ";
    cin>>bRows>>bCol;

    if (bRows!=aCol)
    {
        cout<<"Sorry we cann't multiply matries A and B. ";
    }


    for (i=0;i<aRows;i++)
    {
        for (j=0;j<aCol;j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }
    }

    for (i=0;i<bRows;i++)
    {
        for (j=0;j<bCol;j++)
        {
            cout<<"B["<<i<<"]["<<j<<"] : ";
            cin>>b[i][j];
        }
    }



    cout<<"A Elements : "<<endl;
    for (i=0;i<aRows;i++)
    {
        for (j=0;j<aCol;j++)
        {
            cout<<a[i][j]<<endl;
        }
    }
    cout<<endl;


    cout<<"B Elements : "<<endl;
    for (i=0;i<bRows;i++)
    {
        for (j=0;j<bCol;j++)
        {
            cout<<b[i][j]<<endl;
        }
    }


    for (i=0;i<aRows;i++)
    {
        for (j=0;j<bCol;j++)
        {
            for (k=0;k<bRows;k++)
            {
                sum+=a[i][k]+b[k][j];
            }
            matrix[i][j]=sum;
            sum=0;
        }
    }


    cout<<"Result matrix."<<endl;
    for (i=0;i<aRows;i++)
    {
        for (j=0;j<bCol;j++)
        {
            cout<<matrix[i][j];
        }
        cout<<endl;
    }




    return 0;
}
