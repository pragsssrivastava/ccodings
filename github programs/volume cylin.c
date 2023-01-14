#include<stdio.h>
void main()
{
	float R,H,vol;
	printf("Enter the radius of cylinder:");
	scanf("%f",&R);
	printf("Enter the height of cylinder:");
	scanf("%f",&H);
	vol=3.14*R*R*H;
	printf("The volume of cylinder is:%f\n",vol);
	
}
