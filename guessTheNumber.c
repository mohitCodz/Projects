#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int randomNumber = rand() % 101; 
    int attempt  = 1;
    int guess;
   // printf("%d ", randomNumber);
   
    while(guess != randomNumber){    
        printf("\nGuess the Number : ");
        scanf("%d",&guess);
        
        if(guess == randomNumber){
            printf("Found in %d Attempts",attempt);
            break;
        }
        else if(randomNumber > guess){
            printf("Higher Number Please \n");
        }
        else if(randomNumber < guess){
            printf("Lower Number Please \n");
        }
        attempt++;
    }
  
    return 0;
}