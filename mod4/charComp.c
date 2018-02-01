/*
 * =====================================================================================
 *
 *       Filename:  charComp.c
 *
 *    Description:  char Comparisons
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:43:36 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char num;

    printf("Enter a number (0-9):\n");
    scanf("%c", &num);

    if(num == 0) {
        printf("You entered 0\n");
    }
    else {
        printf("You entered non-zero [%c]\n", num);
    }

    
    if (isdigit(num)) {
        printf("Your char is a digit. You entered [%c]\n", num);
    }
    else if (isalpha(num)) {
        printf("Your char is alpha. You entered [%c]\n", num);
    }
    else {
        printf("Your char is neither alpha nor numeric.\n");
    }

    return 0;
}
// Function Definitions


