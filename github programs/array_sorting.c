#include<stdio.h>
void main()
{
	int n,i,j,temp;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the element:");
		scanf("%d",&a[i]);
	}
		printf("The unsorted array is:");
		for(i=0;i<n;i++){
			printf("%d",a[i]);
		}	
			printf("\n");
			for(i=0;i<n;i++){
				for(j=0;j<n-i-1;j++){
					if(a[j]>a[j+1]){
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
			}
					printf("The sorted array is:");
					for(i=0;i<n;i++){
						printf("%d ",a[i]);
					}
					printf("\n");
}

