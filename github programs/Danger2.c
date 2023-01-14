#include<stdio.h>
void main(){
	float rad,area,peri;
	printf("enter the radius of the circle:");
	scanf("%f",&rad);
	area=3.14*rad*rad;
	peri=2*3.14*rad;
	printf("The area of the circle is:%f\n",area);
	printf("The perimetre of the circle:%f\n",peri);
	}
