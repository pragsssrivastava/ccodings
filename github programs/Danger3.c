#include<stdio.h>
void main(){
	float length,width,area,peri;
	printf("Enter the length of the rectangle:");
	scanf("%f",&length);
	printf("Enter the width of the rectangle:");
	scanf("%F",&width);
	area=(length*width);
	peri=2*(length+width);
	printf("The area of the rectangle is:%f\n",area);
	printf("The perimetre of the rectangle is:%f\n",peri);
}
