/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:32:00 AM
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
const int CHANCES = 5;

// Function Prototypes

// Main Function
int main()
{
    // Variables
    int randNum;
    int userGuess[CHANCES];
    int numGuess = 0;

    // Create a random number
    srand((int)(time(0)));
    randNum = rand() % 21;
    
    while (numGuess < CHANCES) {
        printf("Please enter a number: ");
        scanf("%d", &userGuess[numGuess]);

        if (userGuess[numGuess] > 20 || userGuess[numGuess] < 0) {
            printf("Invalid entry, please try again...\n\n");
            continue;
        }

        if (userGuess[numGuess] < randNum) {
            printf("Too low!\n\n");
        }
        else if(userGuess[numGuess] > randNum) {
            printf("Too high!\n\n");
        }
        else {
            printf("Congratulations!!! You win!!!\n\n");
            break;
        }

        if (numGuess == CHANCES) {
            printf("You ran out of chances!\n");
            printf("Better luck next time...\n");
        }

        numGuess++;
    }

    printf("You entered: ");
    for (int i = 0; i < numGuess; i++) {
        printf("[%d]  ", userGuess[i]);
    }
    printf("\n");

    return 0;
}
// Function Definitions


