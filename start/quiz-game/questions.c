#include <stdio.h>
#include <ctype.h>

int main()
{

  char questions[][100] = {"1.What is Capital City of Rwanda?",
                           "2. What is the main city in Kenya ?",
                           "3. What is the big city in Tanzania?"};

  char options[][100] = {"A. Kigali", "B. Gisement", "C. Burundi", "D. No answer",
                         "A. Maybe Tomorrow", "B. Burundi.", "C. By Tomorrow.", "D. Nairobi",
                         "A. Bunagana", "B. Gisement", "C. Dar eslam.", "D. None"};

  char answers[3] = {'A', 'D', 'C'};
  int numberOfQuestions = sizeof(questions) / sizeof(questions[0]); // calculate number of questions we have
  ;

  char guess;
  int score;

  printf("Quiz Game\n");
  for (int i = 0; i < numberOfQuestions; i++)
  {

    printf("***************************************\n");
    printf("%s\n", questions[i]);

    for (int j = (i * 4); j < (i * 4) + 4; j++)
    {
      printf("%s\n", options[j]);
    }
    printf("Guess: ");
    scanf("%c", &guess);
    scanf("%c"); // clear \n from input buffer

    guess = toupper(guess);

    if (guess == answers[i])

    {
      printf("Correct answer!");
      score++;
    }
    else
    {
      printf("Wrong answer!");
    }
  }
  printf("***************************************\n");
  printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);

  return 0;
}