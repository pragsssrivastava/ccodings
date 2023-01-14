#include<stdio.h>
int main()
{
	int dia,circum,rad,pi;
	printf("Enter radius of circle:");
	scanf("%d",&rad);
	circum=2*pi*rad;
	dia=2*rad;
	pi=circum/dia;
	printf("the circumferrence is:%d\n",circum);
	printf("the dia is:%d\n",dia);
	printf("The value of pi upto 10 decimal is:%.8d\n",pi);
	
}
