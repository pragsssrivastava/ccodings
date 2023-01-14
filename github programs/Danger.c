#include <stdio.h>
int main(){

	int a,b,c;
	
		printf("enter the value of a=");
		scanf("%d",&a);
		printf("enter the value of b=");
		scanf("%d",&b);
		printf("value of a before swapping=%d\n",a);
		printf("value of b before swapping=%d\n",b);
		b=a+b;
		a=b-a;
		b=b-a;
		printf("value of a after swapping=%d\n",a);
		printf("value of b after swapping=%d\n",b);
		
		}
