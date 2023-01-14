#include<stdio.h>
void main()
{
	int size,i,sum=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
		printf("Enter the element:");
		scanf("%d",&a[i]);
		sum=sum+a[i];
		
	}
		printf("The array created is:");
		for(i=0;i<size;i++){
			printf("%d ",a[i]);
			
		}
			printf("The sum of all elements are:%d\n",sum);
			printf("\n");
}
