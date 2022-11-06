#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
   int number,guess,nguesses=1;
   srand(time(0));
   number=rand()%200 -100;
   
   do{
      printf("guess a number between -100 to 100\n");
      scanf("%d",&guess);
      if (guess>number)
      {
         printf("lower number please\n");
      }
      else if (guess<number)
      {
         printf("higher number please\n");
         
      }
      else 
      {
         printf("you guessed it in %d attempts\n",nguesses);
      }
      nguesses++;
   }
   while(guess!=number);
   
}