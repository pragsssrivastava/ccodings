#include<stdio.h>
void main(){
	float P,R,T,F;
	printf("enter the vale of P:");
	scanf("%f",&P);
	printf("enter the value of R:");
	scanf("%f",&R);
	printf("enter the value of T:");
	scanf("%f",&T);
	F=P*R*T/100;
	printf("the simple interest is:%f\n",F);
}
