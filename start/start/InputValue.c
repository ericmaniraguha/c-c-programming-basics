#include <stdio.h>

int main()
{
  char name[25]; // bytes
  int age;
  char address[25];

  printf("\nYour address here please, "); //
  fgets(address, 25, stdin);              // accept input or scan fx white spaces

  printf("\nHow old are you?,  ");
  scanf("%d", &age);

  printf("\nYour name please,: ");
  scanf("%s", &name); // this will not add text with whitespaces

  printf("You are Mr./Mrs %s  and your age is %d years old. You are located at : %s", name, age, address);

  return 0;
}