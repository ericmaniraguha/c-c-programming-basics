#include <stdio.h>

int main()
{
  FILE *pF = fopen("/home/eric_admin/Desktop/CMU - Courses /learn c/files/append.txt", "r");
  char buffer[255];

  if (pF == NULL)
  {
    printf("There is no such file(Unable to open the file).\n");
  }
  else
  {

    while (fgets(buffer, 255, pF) != NULL)
    {

      printf("%s\n", buffer);
    }
  }

  fclose(pF);

  return 0;
}