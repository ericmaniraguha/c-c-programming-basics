#include <stdio.h>

double square(double x)
{
  double result = x * x;

  return result;
}

int main()
{

  double x = square(2.56);

  printf("The squere is : %.2lf, \n", x);

  return 0;
}