#include<stdio.h>
void main()
{
	int size,i; float avg,sum=0;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
		printf("Enter the element:");
		scanf("%d",&a[i]);
		sum=sum+a[i];
		
	}
		printf("The array is created:");
		for(i=0;i<size;i++){
			printf("%d ",a[i]);
		}
		avg=sum/size;
		printf("The sum of all element are:%0.1f\n",sum);
		printf("The average of all elements are:%f\n",avg);
		printf("\n");
}
