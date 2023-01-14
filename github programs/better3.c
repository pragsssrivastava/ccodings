#include<stdio.h>
int main()
{
	int P,R,T,CI,Power;
	printf("enter the principle amount:");
	scanf("%d",&P);
	printf("enter the rate of interest:");
	scanf("%d",&R);
	printf("enter the value of time:");
	scanf("%d",&T);
	CI=P*(1+R/100)^T;
	printf("The compound interest is:%d\n",CI);
}
