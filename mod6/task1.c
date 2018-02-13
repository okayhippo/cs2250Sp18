/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Create a 10 digit array with random numbers between 0
 *                  and 100
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:06:31 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
const int LEN = 10;

// Function Prototypes

// Main Function
int main()
{
    int ar[LEN];
    srand((int)(time(0)));

    // Initialize array
    for (int i = 0; i < LEN; i++) {
        ar[i] = rand() % 101;
    }

    // Print array
    for (int i = 0; i < LEN; i++) {
        printf("Value %d: [%d]\n", i + 1, ar[i]);
    }

    return 0;
}
// Function Definitions


