#include<stdio.h>
int main()
 {
 	int a,b,c;
 	printf("enter a ");
 	scanf("%d",&a);
 	printf("enter b");
 	scanf("%d",&b);
 	printf("the values without swapping a: %d and b: %d ", a, b);
 	c=a;
 	a=b;
 	b=c;
 	printf("the values after swapping are a: %d and b: %d", a, b);
 	 return 0;
 }
