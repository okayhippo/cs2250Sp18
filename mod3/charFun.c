/*
 * =====================================================================================
 *
 *       Filename:  charFun.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/23/2018 09:58:07 AM
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
    int age;
    char input;

    printf("Do you like to code?:\n");
    scanf("%c", &input);

    printf("1) You entered [%c]\n", input);
    printf("Do you really like to code?:\n");
    scanf("%c", &input);

    printf("You entered [%c]\n", input);

    return 0;
}
// Function Definitions


