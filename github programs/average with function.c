//WAP in C to find the average of marks using written statement.
#include<stdio.h>
float avg(float a,float b){
	return (a+b)/2;
}
	void main()
	{
		float marks,sum=0;int i,n;
		printf("Enter the number of students:");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			printf("Enter the marks:");
			scanf("%f",&marks);
			sum +=marks;
		}
			printf("The average is:%0.2f",avg(sum,n));
		
}
