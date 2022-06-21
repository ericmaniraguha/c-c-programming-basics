#include <stdio.h>

int main()
{
  char grade;

  printf("\nEnter a latter grade : ");
  scanf("%c", &grade);

  if (grade == 'A')
  {
    printf("Perfect!\n");
  }
  else if (grade == 'B')
  {
    printf("You did good!\n");
  }
  else if (grade == 'C')
  {
    printf("You did okay!\n");
  }
  else if (grade == 'D')
  {
    printf("At least not a failure!\n");
  }
  else if (grade == 'E')
  {
    printf("Total Failed!\n");
  }
  else
  {
    printf("Not a valid grade!\n");
  }

  return 0;
}