#include <stdio.h>

int main()
{

  for (int i = 0; i <= 20; i++)
  {
    if (i == 13)
    {
      continue;
    }
    if (i == 18)
    {
      break;
    }
    printf("%d\n", i);
  }

  return 0;
}