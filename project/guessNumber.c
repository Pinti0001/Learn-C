#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // initialize random number generator
    srand(time(0));

    // generate random number between 1 to 100
    int randomNum = (rand() % 100) + 1;

    // printf("Random Number is: %d\n", randomNum);
    int guessed , no_of_guesses = 0;

    do
    {
        printf("guess the Number: ");
        scanf("%d", &guessed);

        if(guessed>randomNum) printf("plz guess the LOWER number\n");
        else printf("plz guess the HIGHER number\n");

        no_of_guesses++;
        
    } while (guessed!=randomNum);
    
    printf("you guessed the number in %d guesses\n", no_of_guesses);

    return 0;
}