#include <stdio.h>
#include <ctype.h>

int main()
{
  char unit;
  float temp;

  printf("\n Is the temperature is (F) or (C)?: ");
  scanf("%c", &unit);

  unit = toupper(unit);

  if (unit == 'C')
  {
    printf("\n Enter the temp is Celsius : ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("\nThe temp in Farenheit is : %.1f \n", temp);
  }
  else if (unit == 'F')
  {
    printf("\n Enter the temp is Ferenheit : ");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("The temp is currently in Celsius %.1f \n", temp);
  }
  else
  {
    printf("The temp is not defined. \n");
  }
  return 0;
}
