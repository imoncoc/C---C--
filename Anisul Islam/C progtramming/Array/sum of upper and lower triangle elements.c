#include<stdio.h>
int main()
{
    int A[3][3],i,j,upperSum=0,lowersum=0;

    printf("Enter the elements of matrix.\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEntered matrix : \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            {
                printf("%d ",A[i][j]);
            }
            printf("\n");
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if (i<j)
            {
                upperSum=upperSum+A[i][j];
            }
            if (i>j)
            {
                lowersum=lowersum+A[i][j];
            }
        }
    }
    printf("Sum of Upper triangle elements : %d\n",upperSum);
    printf("Sum of Lower triangle elements : %d",lowersum);






    return 0;
}
