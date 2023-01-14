#include<stdio.h>
void main()
{
	int size,i;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
		printf("Enter the element:");
		scanf("%d",&a[i]);
		
	}
		printf("The array is : ");
		for(i=0;i<size;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
}
