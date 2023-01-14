#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the first number a:");
	scanf("%d",&a);
	printf("enter the second number b:");
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("The value of a after swapping is:%d\n",a);
	printf("The value of b after swapping is:%d\n",b);
}
