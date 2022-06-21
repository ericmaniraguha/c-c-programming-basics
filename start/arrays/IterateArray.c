#include <stdio.h>

int main()
{
  double prices[] = {0.5, 15.2, 2.5, 6.3, 45, 7.2, 0.2};

  //  printf("%d bytes\n", sizeof(prices));

  int len = sizeof(prices) / sizeof(prices[0]);

  for (int i = 0; i < len; i++)
  {

    printf("$%.2f\n", prices[i]);
  }

  return 0;
}