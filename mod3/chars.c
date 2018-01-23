/*
 * =====================================================================================
 *
 *       Filename:  chars.c
 *
 *    Description:  Practice with characters
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:51:33 AM
 *       Revision:  none
 *       Compiler:  gcc chars.c -o chars -lm(if using math)
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char input;
    bool error;

    printf("Do you like to code?\n");
    scanf("%c", &input);
    printf("You entered %c\n", input);

    while (error) {
        if (input == 'y') {
            printf("That's awesome! I love to code, also!\n");
            error = false;
        }
        else if (input == 'n') {
            printf("That's not cool... Coding is fun!\n");
            error = false;
        }
        else {
            printf("That is not a valid entry. Goodbye.\n");
            error = true;
        }
    }

    return 0;
}
// Function Definitions


