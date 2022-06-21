#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
  int x;
  x = 25;
  int y = 312;

  bool isAble = true;
  int age = 41;
  char grade = 'C';        // single character
  char name[] = "Mr.Eric"; // this is an array of characters
  float marks = 3.5;
  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.75;

  printf("My name is %s and I have alread %d years .\n", name, age);
  printf("I have achieved %c of marks which means that i have %f.2 out of 5\n", grade, marks);
  printf("\n I have worn, are you sure ? %d", isAble);
  printf("Here, boolean is :", true);

  printf("================================================\n");

  printf("Item 1: $%.2f\n", item1);
  printf("Item 2: $%.2f\n", item2);
  printf("Item 3: $%.2f\n", item3);

  return 0;
}