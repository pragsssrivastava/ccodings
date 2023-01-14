#include<stdio.h>
int main()
{
	float pi,rad,C,D;
	printf("enter the value of radius:");
	scanf("%f",&rad);
	C=2*3.14*rad;
	D=2*rad;
	pi=C/D;
	printf("the value of pi is:%.9f\n",pi);
}
