/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Task 1: pair programming... Multiplication tables 1-10
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:37:28 AM
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
    // const int min = 1;
    const int max = 10;
    int y = 1;
    int line = 1;
    
    while (line <= max) {
        while (y <= max){
            printf("%d ", line * y);
            y++;
        }

        printf("\n");
        y = 1;
        line++;
    }

    return 0;
}
// Function Definitions


