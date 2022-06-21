#include <stdio.h>
#include <string.h>

// typedef char user[25];
typedef struct
{

  char name[25];
  int id;
  char password[25];
} User;

int main()
{
  // typedef it gives an existing datatype a nickname

  User user1 = {"Orane", "passwordhere", 12345678};
  User user2 = {"Parker", "password1212", 12021020};

  printf("%s \n", user1.name);
  printf("%s \n", user1.password);
  printf("%d \n", user1.id);

  printf("%s \n", user2.name);
  printf("%s \n", user2.password);
  printf("%d \n", user2.id);

  return 0;
}