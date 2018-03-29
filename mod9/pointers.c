/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:43:48 AM
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
    int i = 7;
    // int* pi = NULL;
    // pi = &i;

    printf("i[%d] value that points to pi [%d]\n", i, *pi);

    printf("Enter number of elements: \n");
    scanf("%i", &i);

    // Define array with input
    int ar[i];
    for (int j = 0; j < i; j++) {
        printf("ar[%d] = %d\n", j, ar[j]);
    }

    return 0;
}
// Function Definitions


