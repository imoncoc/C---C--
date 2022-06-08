#include<stdio.h>
int main()
{
    int i,j,numberOfRow,numberOfCol;
    int A[100][100], B[100][100],C[100][100];
    printf("Enter number of Row and Cols = ");
    scanf("%d %d",&numberOfRow,&numberOfCol);

    printf("Enter elements of A matrix.\n");
    for (i=0;i<numberOfRow;i++)
    {
        for (j=0;j<numberOfCol;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of B matrix.\n");
    for (i=0;i<numberOfRow;i++)
    {
        for (j=0;j<numberOfCol;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("A = ");
    for (i=0;i<numberOfRow;i++)
    {
        printf("\t");
        for (j=0;j<numberOfCol;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");

    }

    printf("\nB = ");
    for (i=0;i<numberOfRow;i++)
    {
        printf("\t");
        for (j=0;j<numberOfCol;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");

    }
    printf("\n");

    for(i=0;i<numberOfRow;i++)
    {
        for (j=0;j<numberOfCol;j++)
        {
            C[i][j]= A[i][j]+B[i][j];
        }
    }

     printf("A + B = ");
    for (i=0;i<numberOfRow;i++)
    {

        for (j=0;j<numberOfCol;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");

    }
    printf("\n");

    for(i=0;i<numberOfRow;i++)
    {
        for (j=0;j<numberOfCol;j++)
        {
            C[i][j]= A[i][j]-B[i][j];
        }
    }

     printf("A - B = ");
    for (i=0;i<numberOfRow;i++)
    {

        for (j=0;j<numberOfCol;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");

    }

    return 0;
}

