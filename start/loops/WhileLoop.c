#include <stdio.h>
#include <string.h>

// while loop repeat  a section of code possibly unlimited times
// while loop condition remains true
// a while loop might not execute at all until

int main()
{

  char name[25];

  printf("Enter your name here : ");
  fgets(name, 25, stdin);
  name[strlen(name) - 1] = '\0';

  while (strlen(name) == 0)
  {
    printf("\n You did not entered your name.");
    printf("\nEnter your name here : ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
  }
  printf("Hello Mr./Mrs./Ms. %s \n", name);
  return 0;
}