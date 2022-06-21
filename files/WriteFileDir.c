// You can write a file in different locations
#include <stdio.h>

int main()
{
  FILE *pF = fopen("/home/eric_admin/Desktop/test2.tx", "w");

  fprintf(pF, "THis is a file written in c programming on desktop.");

  fclose(pF);
  return 0;
}
