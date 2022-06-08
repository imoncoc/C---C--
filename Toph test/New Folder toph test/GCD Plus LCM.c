#include<stdio.h>

long long GCD(long long int a, long long int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}

long long LCM(long long a,long long b){
    if(a>b)
        return (a/GCD(a,b))*b;
    else
        return (b/GCD(a,b))*a;
}

int main()
{
    unsigned long long int n,num1,num2,n1,n2,gcd,lcm,rem,i, test;

   // printf("How many number : ");
    scanf("%llu",&n);

    for (test=0; test<n; test++)
    {
        scanf ("%llu %llu",&num1,&num2);
        n1=num1;
        n2=num2;



        if (GCD(n1, n2) + LCM(n1, n2) == num1 + num2) {
            printf("true\n");
        }
        else {
            printf("false\n");
        }
    }


    return 0;
}
