#include <stdio.h>
 int main()
{
    float a, b, pro = 0.0f;
    printf("Enter two floating numbers A and B : \n");
    scanf("%f%f", &a, &b);
    pro = a * b;
    printf("Product of A and B is: %f", pro);
 
    return 0;
}
