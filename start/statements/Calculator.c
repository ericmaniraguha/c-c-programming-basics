#include <stdio.h>

int main()
{

  char operator;
  double num1;
  double num2;
  double result;

  printf("Enter operator sign which is (+ - * /)");
  scanf("%c", &operator);

  printf("Enter number one : ");
  scanf("%lf", &num1);
  printf("Enter number two : ");
  scanf("%lf", &num2);

  switch (operator)
  {
  case '+':
    result = num1 + num2;
    printf("\nResult is : %.2lf", result);
    break;
  case '-':
    result = num1 - num2;
    printf("\nResult is : %.2lf", result);
    break;
  case '*':
    result = num1 * num2;
    printf("\nResult is : %.2lf", result);
    break;
  case '/':
    result = num1 / num2;
    printf("\nResult is : %.2lf", result);
    break;
  default:
    printf("%c is not valid operator", operator);
    break;
  }

  return 0;
}