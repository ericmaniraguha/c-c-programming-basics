#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Logical operators = && (AND) checks if two conditions are true

  float temp = 1000;
  bool sunny = false;

  if (temp >= 0 && temp <= 30 && sunny)
  {
    printf("\nThe Weather is good");
  }
  else
  {
    printf("\nThe Weather is bad");
  }
}