#include <stdio.h>
#include <string.h>

int main()
{
  char cars[][10] = {"Mitsubish", "Benz", "Hundai", "Camaro"};

  // cars[0] = "Tesla"; This is not possible because
  strcpy(cars[0], "Tesla");
  int len = sizeof(cars) / sizeof(cars[0]);

  for (int i = 0; i < len; i++)
  {
    printf("%s\n", cars[i]);
  }

  return 0;
}