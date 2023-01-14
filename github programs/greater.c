#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	a>b? printf("The first number %d is greater than second number:%d\n",a,b):printf("The first number %d is smaller than the second number:%d\n",a,b);
}
