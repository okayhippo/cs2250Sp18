/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  Prompt for positive number, stay in loop until one is entered
 *
 *        Version:  1.0
 *        Created:  02/06/2018 10:05:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int userInput;

    printf("Please enter a positive number >= 0\n");
    scanf("%d", &userInput);

    while (userInput < 0) {
        printf("That is not a positive number, try again.\n");
        scanf("%d", &userInput);
    }

    printf("\nThank you.\n");

    return 0;
}
// Function Definitions


