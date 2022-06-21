#include <stdio.h>

int main()
{
  FILE *pF = fopen("test.txt", "w"); // w = write, r = read, a = append

  FILE *pA = fopen("append.txt", "a"); // append method

  fprintf(pF, "\nTest here done by saving text file, here we are in c.");
  fprintf(pA, "\nI have appended a text to the file");

  fclose(pF);
  fclose(pA);

  return 0;
}