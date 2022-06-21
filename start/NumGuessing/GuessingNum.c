#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{

  const int MIN = 110;
  const int MAX = 1000;
  int guess;
  int guesses;
  int answer;

  // uses current time as a seed
  srand(time(0));

  // generate random number between MIN and max
  answer = (rand() % MAX) + MIN;
  printf("%d \n", answer);

  return 0;
}
