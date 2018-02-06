/*
 * =====================================================================================
 *
 *       Filename:  while2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:25:06 AM
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
    int num = 2;
    int age = 21;
    
    while (num) {
        printf("Num [%d]\n", num);
        num--;
    }
    
    // This type of loop REQUIRES a break statement
    while (1) {
        if (age == 0) {
            printf("Thank you\n");
            break;
        }

        printf("Your age is [%d]\n", age);
        age--;
    }

    printf("Done\n");

    return 0;
}
// Function Definitions


