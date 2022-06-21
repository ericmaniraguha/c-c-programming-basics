#include <stdio.h>

int findMax(int a, int b)
{

  return (a > b) ? a : b;
}

int main()
{

  int max = findMax(15, 45);
  printf("The maximum number is : %d \n", max);
  return 0;
}