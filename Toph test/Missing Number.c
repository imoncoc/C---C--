#include <stdio.h>

int main() {
	int a,b,c,d,sum;
	scanf("%d",&sum);

	scanf("%d %d %d",&a,&b,&c);
	//sum=a+b+c+d;

	d = sum-(a+b+c);

	printf("%d",d);
	return 0;
}
