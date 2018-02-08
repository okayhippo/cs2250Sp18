/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:52:10 AM
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
    int const MAX = 10;

    for (int i = 1; i <= MAX; i++) {
        
        for (int j = 1; j <= MAX; j++) {
            printf("%3d ", j * i);
        }

        printf("\n");
    }

    return 0;
}
// Function Definitions


