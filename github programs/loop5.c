#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the nth value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
				printf("%i",i);
			}
		
		printf("\n");
	}
	
}
