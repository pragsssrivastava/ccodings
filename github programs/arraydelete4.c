#include<stdio.h>
void main()
{
	int n,i,freq[30]={0};
	for(i=0;i<10;i++){
			printf("Enter the marks of students:%d",i+1);
			scanf("%d",&n);
			if(n>70)
			freq[n-71]++;
		}
			for(i=0;i<30;i++){
			if(freq[i]>0)
			printf("%d marks was scored by %d students\n",i+71,freq[i]);
			}
			printf("\n");

}
