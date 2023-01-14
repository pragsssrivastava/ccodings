#include<stdio.h>
void main()
{
	int a;
	printf("Enter the number to be checked:");
	scanf("%d",&a);
	a%2==0? printf("The number is even:%d\n",a):
	printf("The number is odd:%d\n",a);
	
}
