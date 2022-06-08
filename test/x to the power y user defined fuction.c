#include<stdio.h>
int calculatePower(int base, int exp)
int i,result=1;
for (i=1;i<=exp;i++)
{
    return result= result*base;
}






int main()
{
    int (base,exp);
    printf("Enter base : ");
    scanf("%d",&base);

    printf("Enter Exp : ");
    scanf("%d",&exp);

    int result= calculatePower(base,exp);
    printf("Result = %d",result);

}
