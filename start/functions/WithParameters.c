#include <stdio.h>

void funWithParams(char name[], int age)
{
  printf("\n Happy birthday brother %s, congratulation for %d years old.\n", name, age);
}

int main()
{
  int age = 21;
  char name[] = "Mr. Kamaro";

  funWithParams(name, age);
  return 0;
}