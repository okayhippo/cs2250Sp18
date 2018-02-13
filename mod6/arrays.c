/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:45:12 AM
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
const int LEN = 60;

// Function Prototypes

// Main Function
int main()
{
    int ar[LEN];
    ar[0] = 33;
    ar[1] = 22;
    ar[2] = 66;
    ar[3] = 99;

    // Initialize full array
    for (int i = 0; i < LEN; i++) {
        // Task: Initialize numbers divisible by 3
        // to 0, else set to -99
        if (i % 3 == 0) {
            ar[i] = 0;
        }
        else {
            ar[i] = -99;
        }
    }

    for (int i = 0; i < LEN; i++) {
        printf("Value %d: [%d]\n", i + 1, ar[i]);
    }

    return 0;
}
// Function Definitions


