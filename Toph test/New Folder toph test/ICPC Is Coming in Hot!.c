#include<stdio.h>
int main()
{
    char str[100],ch;
    int a,b,c,d,e,f,g,h,i,j,z=0;
    a=b=c=d=e=f=g=h=i=j=0;
    gets(str);
    printf("%s",str);

    while((ch=str[z])!='\0')
    {
        if (ch=='1')
            a++;
            else if (ch=='2')
                b++;
                else if (ch=='3')
                c++;
                else if (ch=='4')
                d++;
                else if (ch=='5')
                e++;
                else if (ch=='6')
                f++;
                else if (ch=='7')
                g++;
                else if (ch=='8')
                h++;
                else if (ch=='9')
                i++;
                else if (ch=='0')
                j++;
        z++;
    }
     printf("\nNumber of 1 = %d\n",a);
     printf("Number of 2 = %d\n",b);
     printf("Number of 3 = %d\n",c);
     printf("Number of 4 = %d\n",d);
     printf("Number of 5 = %d\n",e);
     printf("Number of 6 = %d\n",f);
     printf("Number of 7 = %d\n",g);
     printf("Number of 8 = %d\n",h);
     printf("Number of 9 = %d\n",i);
     printf("Number of 0 = %d\n",j);

     while((ch=str[z])!='\0')
     {
         if (a<b || a<c || a<d || a<e || a<f || a<g || a<h || a<i || a<j)
     }
     print("")



    return 0;
}
