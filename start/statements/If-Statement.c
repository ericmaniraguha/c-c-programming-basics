#include <stdio.h>

int main()
{

  int age = 0;
  printf("Enter your age ");
  scanf("%d", &age);

  if (age >= 18)
  {
    printf("You are eligible \n");
  }
  else if (age < 18 && age >= 10)
  {
    printf("You are under age.\n");
  }
  else if (age < 10 && age >= 0)

  {
    printf("You are a kid \n ");
  }
  else
  {
    printf("Your age is not defined \n");
  }

  return 0;
}