#include <stdio.h>
#include <string.h>

struct student
{
  char name[25];
  float gpa;
};
int main()
{

  struct student student1 = {"Kabalisa", 3.2};
  struct student student2 = {"Patrick", 4.2};
  struct student student3 = {"Ange", 3.2};
  struct student student4 = {"Kaka", 3.0};
  struct student student5 = {"Peter", 4.1};
  struct student student6 = {"Sandy", 2.2};

  struct student students[] = {student1, student2, student3, student4, student5, student6};

  for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
  {

    printf("%-12s \t", students[i].name);
    printf("%.1f\t\n", students[i].gpa);
  }

  return 0;
}
