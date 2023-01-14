#include<stdio.h>
void main()
{
	float length,breadth,area,peri;
	printf("Enter the length of the rectangle:");
	scanf("%f",&length);
	printf("Enter the breadth of the rectangle");
	scanf("%f",&breadth);
	area=length*breadth;
	peri=2*(length+breadth);
	printf("The area of the rectangle is:%f\n",area);
	printf("The perimetre of rectangle is:%.2f\n",peri);
getch()
}


