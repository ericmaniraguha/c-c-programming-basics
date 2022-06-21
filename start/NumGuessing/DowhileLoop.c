#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{

  const int MIN = 1;
  const int MAX = 100;
  int guess;
  int guesses;
  int answer;

  // uses current time as a seed
  srand(time(0));

  // generate random number between MIN and max
  answer = (rand() % MAX) + MIN;

  do
  {
    printf("\nEnter a guess....");
    scanf("%d", &guess);

    if (guess > answer)
    {
      printf("Too High\n");
    }
    else if (guess < answer)
    {
      printf("Too Low...");
    }
    else
    {
      printf("CORRECT....!");
    }
    guesses++;

  } while (guess != answer);
  printf("********************************");
  printf("Answer : %d \n", answer);
  printf("Guesses : %d \n", guesses);
  printf("********************************");
  return 0;
}
