#include <stdio.h>
#include <time.h>


int main(void) 
{
  int randomNumber;
  int guess;
  int life = 5;
  time_t t;
  printf("Welcome the the guessing game!\n");
  printf("I have chosen a number between 1-20 which you must guess!\n");

  srand((unsigned)time(&t));
  randomNumber = rand()%21;

  while (life>0)
    {
      printf("please guess a number:\n");
      scanf("%d",&guess);
      if (guess == randomNumber)
      {
        printf("yes!!");
        break;
      }
      else 
        if (guess<randomNumber)
        {
          printf("no, too low!");
          life--;
        }
        else
        {
          printf("no, too high!");
          life--;
        }
      if (life==0)
        printf("\ngame over");
            
    }
  
}