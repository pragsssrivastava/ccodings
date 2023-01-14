#include<stdio.h>
int main()
{
	int f1,f2,I1,I2,sumi,sumf;
	printf("Enter the first number in feet:");
	scanf("%d",&f1);
	printf("Enter the second number in inches:");
	scanf("%d",&I1);
	printf("Enter the third number in feet:");
	scanf("%d",&f2);
	printf("Enter the forth number in inches:");
	scanf("%d",&I2);
	sumi=I1+I2;
	sumf=f1+f2+(sumi/12);
	sumi=sumi%12;
	printf("The value of feet is:%d\n",sumi);
	printf("The value in inch is:%d\n",sumf);
	
	
}
