#include <stdio.h>
#include <string.h>
int main()
{
 char a[100];
 int length;
 char str[100];
 int i;
 printf("Enter the String\n");
 gets(str);
 for (i = 0; str[i] != '\0'; ++i);
 printf("Length of String = %d\n", i);
 printf("enter a string again to calculate its length using strlen function\n");
 scanf("%s", a);
 length = strlen(a);
 printf("Length of the string = %d\n", length);
 return 0;
 }
