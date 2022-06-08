#include<stdio.h>
int main()
{
    int first[100][100],second[100][100],r1,r2,c1,c2,i,j,k,sum=0,result[10][10];

    printf("Enter rows and column for first matrix : ");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and column for second matrix : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("\nError !! Column of first matrix not equals to second.\n");

        printf("Enter rows and column for first matrix : ");
        scanf("%d %d",&r1,&c1);

        printf("Enter rows and column for second matrix : ");
        scanf("%d %d",&r2,&c2);
    }
    printf("\nEnter elements for First matrix.\n");
    for (i=0;i<r1;i++)
    {

        for (j=0;j<c1;j++)
        {
            printf("First[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }

    }

    printf("\nEnter elements for Second matrix.\n");
    for (i=0;i<r2;i++)
    {

        for (j=0;j<c2;j++)
        {
            printf("First[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }

    }

    //multiaplication matrix
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
            for (k=0;k<c1;k++)
            {
                sum=sum+first[i][k]*second[k][j];
            }
             result[i][j]=sum;
             sum=0;
        }
    }

    //printf for first matrix

    printf("\nFirst matrix.\n");
    for (i=0;i<r1;i++)
    {
        printf("\t");
        for (j=0;j<c1;j++)
            printf("%d ",first[i][j]);
            printf("\n");
    }

    //printf for second matrix

    printf("\nSecond matrix.\n");
    for (i=0;i<r2;i++)
    {
        printf("\t");
        for (j=0;j<c2;j++)
            printf("%d ",second[i][j]);
            printf("\n");
    }

    //printf for result matrix

    printf("\nResult matrix.\n");
    for (i=0;i<r1;i++)
    {
        printf("\t");
        for (j=0;j<c2;j++)
            printf("%d ",result[i][j]);
            printf("\n");
    }





    return 0;
}
