#include <stdio.h>

int main()
{
  FILE *pF = fopen("/home/eric_admin/Desktop/CMU - Courses /learn c/files/append.txt", "r");
  char buffer[255];

  while (fgets(buffer, 255, pF) != NULL) // read all lines inside my file
  {
    printf("%s", buffer);
  }

  fclose(pF);

  return 0;
}