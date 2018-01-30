/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  Test for race medals
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:30:27 AM
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
    int pos = 0;

    printf("What is your position?\n");
    scanf("%d", &pos);

    switch (pos) {
        case 1:
            printf("\nCongratulations, you received a gold medal!\n");
            break;

        case 2:
            printf("\nYou did very well, you received a silver medal!\n");
            break;

        case 3:
            printf("\nYou did well. You received a bronze medal.\n");
            break;

        default:
            printf("\nYou should probably train harder...\n");
    }
    

    return 0;
}
// Function Definitions


