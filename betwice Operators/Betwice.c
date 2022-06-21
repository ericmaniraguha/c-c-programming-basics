#include <stdio.h>

int main()
{

  // & = AND;
  // | = OR
  // ^ = xor
  // << LEFT SHIFT
  // >> RIGHT SHIFT

  int x = 6;  // 6  =  00000110
  int y = 12; // 12 =  00001100
  int z = 0;  // 0  =  00000000

  z = x & y;
  printf("AND = %d\n", z); // 4 = 00000100

  z = x | y;
  printf("OR = %d\n", z); // 14 = 00001110

  z = x ^ y;
  printf("XOR = %d\n", z); // 10 = 00001010

  z = x << 1;
  printf("SHIFT LEFT = %d\n", z); // 12 = 00010100

  z = x << 2;
  printf("SHIFT LEFT TWICE= %d\n", z); // 24 = 00101000

  z = x << 1;
  printf("SHIFT RIGHT = %d\n", z); // 6 = 00000110  => 0000001
  z = x << 2;
  printf("SHIFT RIGHT TWICE= %d\n", z); // 6 = 00000110  => 00000001

  return 0;
}
