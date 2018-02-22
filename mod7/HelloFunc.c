/*
 * =====================================================================================
 *
 *       Filename:  HelloFunc.c
 *
 *    Description:  Learn to use functions
 *
 *        Version:  1.0
 *        Created:  02/20/2018 08:41:15 AM
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
void Hello(int);

// Main Function
int main()
{
    int numTimes;

    printf("How many times would you like to print?\n");
    scanf("%d", &numTimes);
    printf("\n");

    Hello(numTimes);

    return 0;
}
// Function Definitions
void Hello(int len) {
    for (int i = 0; i < len; i++) {
        printf("Hello World\n");
    }
}

