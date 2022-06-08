#include <stdio.h>
#include <math.h>
#include<iostream>
using namespace std;

int main () {
    float a,result;
    int result1;
    scanf("%f", &a);
    a=a*100;

    printf ("NOTAS:\n");

    result1 = a/10000;
    result = fmod(a,10000);
    printf ("%d nota(s) de R$ 100.00\n", result1);

    result1 = result/5000;
    result = fmod(result,5000);
    printf ("%d nota(s) de R$ 50.00\n", result1);

    result1 = result/2000;
    result = fmod(result,2000);
    printf ("%d nota(s) de R$ 20.00\n", result1);

    result1 = result/1000;
    result = fmod(result,1000);
    printf ("%d nota(s) de R$ 10.00\n", result1);

    result1 = result/500;
    result = fmod(result,500);
    printf ("%d nota(s) de R$ 5.00\n", result1);

    result1 = result/200;
    result = fmod(result,200);
    printf ("%d nota(s) de R$ 2.00\n", result1);

    printf("MOEDAS:\n");

    result1 = result/100;
    result = fmod(result,100);
    printf ("%d moeda(s) de R$ 1.00\n", result1);

    result1 = result/50;
    result = fmod(result,50);
    printf ("%d moeda(s) de R$ 0.50\n", result1);

    result1 = result/25;
    result = fmod(result,25);
    printf ("%d moeda(s) de R$ 0.25\n", result1);

    result1 = result/10;
    result = fmod(result,10);
    printf ("%d moeda(s) de R$ 0.10\n", result1);

    result1 = result/5;
    result = fmod(result,5);
    printf ("%d moeda(s) de R$ 0.05\n", result1);



    result1 = result/1;
    result = fmod(result,1);
    printf ("%d moeda(s) de R$ 0.01\n", result1);



return 0;
}

