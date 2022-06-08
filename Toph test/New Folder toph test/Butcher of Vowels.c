#include<stdio.h>
int main()
{
    int n,i;
    char ch[10];

    scanf("%d",&n);


    for (i=1;i<=n;i++)
    {
        scanf("%s",&ch[i]);
        {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                printf("vowles");
            else
                printf("consonant");
        }
    }


    return 0;
}
