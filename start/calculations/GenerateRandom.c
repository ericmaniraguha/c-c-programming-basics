#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  srand(time(0));

  int number1 = (rand() % 100) + 1;
  int number2 = (rand() % 100) + 1;
  int number3 = (rand() % 100) + 1;
  int number4 = (rand() % 100) + 1;

  printf("%d \n", number1);
  printf("%d \n", number2);
  printf("%d \n", number3);
  printf("%d \n", number4);

  return 0;
}