#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the nth value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i==n||j==1||i==j)
			
				printf("*");//change to star for printing star.
			
				else
				printf(" ");
			}
		
		printf("\n");
	}
	
}
