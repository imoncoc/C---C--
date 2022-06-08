#include<stdio.h>
int main()
{
    int i,j;
    int A[3][4]={ {1,2,3,4}, {6,7,8,9,10}, {13,14,15,16}  };

    //for (i=0; i<3; i++)
    for (i=0; i<3;i++)
    {
        for (j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
          printf("\n");
    }


    return 0;
}
