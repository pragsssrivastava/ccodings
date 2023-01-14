#include<stdio.h>
void main()
{
	int size,i,value,pos; 
	printf("Enter the size of an array:");
	scanf("%d",&size);
	int a[size+10];
	for(i=0;i<size;i++){
		printf("The array created is:");
		scanf("%d",&a[i]);
		
	}
		printf("Enter the value to be updated:\n");
		scanf("%d",&value);
		printf("Enter the position:");
		scanf("%d",&pos);
		for(i=size;i>pos;i--){
			a[i]=a[i-1];
		}
			a[pos]=value;	
		
			
			printf("The updated array is:");
			for(i=0;i<=size;i++){
				printf("%d ",a[i]);
			}
				printf("\n");
}
