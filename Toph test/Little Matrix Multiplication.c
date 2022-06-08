#include<stdio.h>
int main()
{
    int a11,a12,a21,a22,b11,b12,b21,b22,c11,c12,c21,c22;
   // printf("Enter a11 a12 : ");
    scanf("%d %d",&a11,&a12);

   // printf("Enter a21 a22 : ");
    scanf("%d %d",&a21,&a22);

    //printf("Enter b11 b12 : ");
    scanf("%d %d",&b11,&b12);


   // printf("Enter b21 b22 : ");
    scanf("%d %d",&b21,&b22);

    c11=a11*b11+a12*b21;
    c12=a11*b12+a12*b22;
    c21=a21*b11+a22*b21;
    c22=a21*b12+a22*b22;

    printf("%d %d",c11,c12);
    printf("\n%d %d",c21,c22);



    return 0;

}
