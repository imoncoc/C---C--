#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b;
    while (scanf("%d %d",&a,&b) != EOF)
    {
        if (b%a==0)
            printf ("Sao Multiplos\n");
        else
            printf ("Nao sao Multiplos\n");
    }
    return 0;
}
