#include <stdio.h>

void printAge(int age)
{

  printf("You are %d years old.\n", age);
}

void printAgePointer(int *pAge)
{
  printf("You are %d years old.\n", *pAge); // deference
}

int main()
{
  int age = 21;
  int *pAge = NULL; // Better to assign NULL if declared a pointer
  pAge = &age;

  printAge(age);
  printf("======I Have used pointer=======\n");
  printAgePointer(pAge);
  return 0;
}