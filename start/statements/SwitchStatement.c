#include <stdio.h>

int main()
{
  char grade;

  printf("\nEnter a letter grade...");
  scanf("%c", &grade);

  switch (grade)
  {
  case 'A':
    printf("Perfect!\n");
    break;
  case 'B':
    printf("You did good!\n");
    break;
  case 'C':
    printf("You did Okay!\n");
    break;
  case 'D':
    printf("At least you did not failed!\n");
    break;
  case 'E':
    printf("Total Failed!\n");
    break;
  default:
    printf("No Valid Grade.\n");
    break;
  }

  return 0;
}