/*

 Guess the number game 
 
 */

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
            printf("Congrats !\nNumber is Found in %d Attempts",attempt);
            break;
        }
        else if(randomNumber > guess){
            printf("Enter a higher number \n");
        }
        else if(randomNumber < guess){
            printf("enter a lower number \n");
        }
        attempt++;
    }
  
    return 0;
}
