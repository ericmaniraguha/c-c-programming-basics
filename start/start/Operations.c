#include <stdio.h>

int main()
{
  const float PI = 3.141592653589793;
  int x = 5;
  int y = 2;

  int z = x / y;
  float d = x / y;
  int e = x / (float)y;

  int m = x % y;

  printf("The PI is : %f\n", PI);
  printf("The division is : %d\n", z);
  printf("The division is : %f\n", d);
  printf("The division is converted : %f\n", e);
  printf("Modulars is : %d\n", m);
  return 0;
}