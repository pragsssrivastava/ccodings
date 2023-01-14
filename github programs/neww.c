#include<stdio.h>
#include<string.h>

int main(){
int i,j=0;
    char a[30]="riddhi";
    char b[30];
for(i=strlen(a)-1;i>=0;i--)
{
    b[j]=a[i];
    j++;

}
b[j]='\0';
printf("%s",b);
     return 0;
}



