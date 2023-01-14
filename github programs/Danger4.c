#include<stdio.h>
int main(){
	int principle,rate,time,formulae;
	printf("enter the principle:");
	scanf("%f",&principle);
	printf("enter the rate:");
	scanf("%f",&rate);
	printf("enter the time:");
	scanf("%f",&time);
	formulae=(principle*rate*time/100);
	printf("The formulae:%f\n",formulae);
}
