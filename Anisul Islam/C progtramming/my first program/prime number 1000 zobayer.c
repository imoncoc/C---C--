#include<stdio.h>
int main()
{
    int initialNum,finalNum,i, j,count;



    printf("Enter initialnum number : ");
    scanf("%d",&initialNum);

    printf("Enter finalnum number : ");
    scanf("%d",&finalNum);

    for (i=initialNum; i < finalNum; i++)
    {
        count = 0;
        for (j=2;j<i;j++)
        {
            if (i%j==0)
            {
                count++;
                break;
            }
        }

        if (count == 0) {
            printf("%d ", i);
        }
    }







    return 0;
}
