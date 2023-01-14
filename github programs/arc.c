#include<stdio.h>

int main(){
    int i,a[0][10];
    for(i=0;i<9;i++)
    {
        a[0][i]=2*(i+1);
    }
    for(i=0;i<=9;i++)
    {
    printf("2 x %d =%d\n",i+1,a[0][i] );
    }
    
     return 0;
}
