#include <stdio.h>

int main()
{
  // pointer =  a "variable-like" reference that holds a memory address to another variables.
  //  some tasks are performed more easily with pointers
  /*    * = indirection operators(value address) */
  int age = 21;
  int *pAge = &age;

  int year = 2022;
  int *pYear = &year;

  printf("address of age :%p\n", &age);
  printf("Value of pAge: %p\n", pAge);
  printf("\n");
  printf("Value of variable :%d\n", &year);
  printf("size of year  %d in bytes\n", sizeof(year));   // store intenger with size of 4 bytes
  printf("size of pYear %d in bytes\n ", sizeof(pYear)); // this one has stored hexa decimal addresses with size 8bytes

  printf("Value of age is : %d\n", age);
  printf("value at stored address : %d\n", *pAge); // referencing
  return 0;
}