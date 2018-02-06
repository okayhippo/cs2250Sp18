/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  While loops
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:50:57 AM
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
const int min = 1;
const int max = 20;

// Function Prototypes

// Main Function
int main()
{
    int userNum = 0;
    unsigned int factorial = 1;

    printf("Please enter a number from %d-%d\n", min, max);
    scanf("%d", &userNum);

    if (userNum >= min && userNum <= max) {

        while (userNum > 0) {
            factorial *= userNum;
            userNum--;
        }

        printf("%u\n", factorial);
    }
    
    else {
        printf("That is not a valid entry, please try again.\n");
    }

    return 0;
}
// Function Definitions


