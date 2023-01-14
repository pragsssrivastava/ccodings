#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the value of a:\n");
	 scanf("%d",&a);
	 printf("Enter the value of b:\n");
	 scanf("%d",&b);
	 a>b;
	 a<b;
	 a=b;
	 a>=b;
	 a<=b;
	 a+=b;
	 a*=b;
	 a-=b;
	 a/=b;
	 printf("A is greater than B is:%d\n",a>b);
	 printf("B is greater than A is:%d\n",a<b);
	 printf("A is equal to B:%d\n",a=b);
	 printf("A is greater than or equal B:%d\n",a>=b);
	 printf("B is greater than or equal to A:%d\n",a<=b);
	 printf("A added to B is equal to:%d\n",a+=b);
	 printf("A multiplied and equals to B:%d\n",a*=b);
	 printf("A substracts and equals to B:%d\n",a-=b);
	 printf("A is divided and equals to B:%d\n",a/=b);
	  
}

