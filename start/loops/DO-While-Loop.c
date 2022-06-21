#include <stdio.h>

int main()
{

  // Dowhile-loop : always executes a block of code once, THEN checks a condition
  int number = 0;
  int sum = 0;

  do
  {
    printf("Enter a number above zero: ");
    scanf("%d", &number);

    if (number > 0)
    {
      sum += number;
    }
  } while (number > 0);

  printf("\n sum is : %d \n", sum);

  return 0;
}