#include <stdio.h>

int main()
{
  const double PI = 3.14159265;
  double radius;
  double circonference;
  double area;

  printf("Enter your radius : ");
  scanf("%lf", &radius);

  circonference = 2 * PI * radius;
  area = PI * radius * radius;

  printf("The circle circonference is : %lf \n", circonference);
  printf(" The are is : %lf \n", area);

  return 0;
}