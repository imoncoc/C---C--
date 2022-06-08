#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter How many Rows : ";
    cin>>row;
    cout<<"Enter How many Colms : ";
    cin>>col;
    int A[row][col],j,i;

    cout<<"Enter elements for matrix. "<<endl;
    for( i=0;  i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            cout<<"A ["<<i<<"] ["<<j<<"] = ";
            cin>>A[i][j];
        }

    }

    cout<<endl<<"2D array print. "<<endl;
    for( i=0;  i<row; i++)
    {
        for( j=0;  j<col; j++)

          cout<<"A ["<<i<<"] ["<<j<<"] = "<<A[i][j]<<endl;

    }




    return 0;
}
