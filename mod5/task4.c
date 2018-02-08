/*
 * =====================================================================================
 *
 *       Filename:  task4.c
 *
 *    Description:  Print first 20 even numbers
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:09:32 AM
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
    int numbersNeeded = 20;
    int i = 0;
    int totalNum = 1;

    printf("Welcome to the even number printing program.\n");
    printf("This program prints ONLY even numbers.\n");
    printf("Enter how many even numbers you need: ");
    scanf("%d", &numbersNeeded);

    printf("\n\n");

    while (totalNum <= numbersNeeded) {
        printf("Num %d: ", totalNum);
        printf("%d\n", i);
        
        totalNum++;
        i += 2;
    }

    printf("\n");

    return 0;
}
// Function Definitions


