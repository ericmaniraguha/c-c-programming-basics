#include <stdio.h>

int main()
{

  int rows;
  int columns;

  printf("\nEnter number of rows:  ");
  scanf("%d", &rows);

  printf("\nEnter number of colums:  ");
  scanf("%d", &columns);

  for (int i = 0; i <= rows; i++)
  {
    for (int j = 0; j <= columns; j++)
    {

      printf("%d ", i);
    }
    printf("\n");
  }

  return 0;
}