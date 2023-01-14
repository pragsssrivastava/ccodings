#include<stdio.h>
int main()
{
	float in_cm,in_m,in_km;
	printf("Enter the value of length in centimetre(cm):");
	scanf("%f",&in_cm);
	in_m=in_cm/100; // as 1cm=1/100
	in_km=in_cm/100000; // as 1km=1/100000cm
	printf("The length in metre(m);%f\n",in_m);
	printf("The length is in kilometre(km):%f\n",in_km);
}
