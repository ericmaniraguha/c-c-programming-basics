#include <stdio.h>

int main()
{
  if (remove("test.txt") == 0)
  {
    printf("The file was deleted successfully.\n");
  }
  else
  {
    printf("The file was NOT deleted.\n");
  }

  return 0;
}