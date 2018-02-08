/*
 * =====================================================================================
 *
 *       Filename:  forLoop.c
 *
 *    Description:  Learning about For loops
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:37:50 AM
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
    int rounds;

    printf("Please enter how many rounds you want to run: ");
    scanf("%d", &rounds);

    for (int i = 0; i < rounds; i++) {
        printf("This is round [%d].\n", i + 1);
        printf("You have %d rounds left.\n", rounds - (i + 1));
    }

    return 0;
}
// Function Definitions


