/*
 * =====================================================================================
 *
 *       Filename:  guess.c
 *
 *    Description:  Guess a number 1 - 10 and win a prize
 *
 *        Version:  1.0
 *        Created:  01/25/2018 10:07:42 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
   int randNum;
   int guess;

    printf("Try to guess a number between 1 and 10.\nPlease make your guess.\n");
    scanf("%d", &guess);

    srand((int)(time(0)));
    randNum = rand() % 10 + 1;

    if (guess == randNum) {
        printf("You guessed %d, the random number was %d.", guess, randNum);
        printf("Wow, great job! I can't believe you guessed the number.");
    }
    else if (guess != randNum) {
        printf("You guessed %d, the random number was %d.\n", guess, randNum);
        printf("Wow, you're terrible at guessing numbers. Better find a day job.\n");
    }

    return 0;
}
// Function Definitions


