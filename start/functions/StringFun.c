#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

  char string1[] = "Maniraguha ";
  char string2[] = "Eric";

  // strlwr(string1);
  // strupr(string1);
  // strcat(string1, string2);
  // strncat(string1, string2, 1);
  // strcpy(string1, string2); // this will replace string1 by string2
  strncpy(string1, string2, 4);

  // strset(string1, '?'); // set all char of a string to a given char
  // strnset(string1, 'x', 1); // set first n char. of a string to a given char
  // strrev(string1); // reverses a string

  // int result = strlen(string1);
  // int result = strncmp(string1, string2, 1);  // string compare n characters
  // int result = strnicmp(string1, string2);    // string compare all compare (ignore case)
  int result = strncmpi(string1, string2, 1); // string compare n char (ignore case)

  printf("Your first name is : %s \n", string1);
  printf("Length of our string is : %d\n", result);

  return 0;
}