#include <stdio.h>
float temp(float f)
{
  return ((f - 32.0) * 5.0 / 9.0);
}
int main()
{
  float f ;
  printf("enter temperature");
  scanf("%f",&f);
  printf("Temperature in Degree Celsius : %0.2f",
          temp(f));
  return 0;
}
