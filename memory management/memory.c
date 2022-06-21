#include <stdio.h>

int main()
{
  // memory = an array of bytes within RAM(street)
  // memory block = a single unit (byte) within memory, used to hold some values (person)
  // memory address = an address of where a memory block is located (house address)

  char a = 'X';
  short b = 'Y';
  int c = 'Z';
  double d = 'Z';

  char y[1];
  char x;

  printf("%d bytes\n", sizeof(a));
  printf("%d bytes\n", sizeof(b));
  printf("%d bytes\n", sizeof(c));
  printf("%d bytes\n", sizeof(d));

  printf("==============================\n");
  printf("%d bytes\n", sizeof(y));
  printf("%d bytes\n", sizeof(x));
  printf("==============================\n");

  printf("%p \n", &(a));
  printf("%p \n", &(b));
  printf("%p \n", &(c));
  printf("%p \n", &(d));

  return 0;
}