/*
 * =====================================================================================
 *
 *       Filename:  random.c
 *
 *    Description:  Learn how to use random numbers
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:52:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>   //For rand() function
#include <time.h>    // for srand() function: set your random seed

// Constants

// Function Prototypes

// Main Function
int main()
{
    //Set your random seed
    srand((int)time(0));
    printf("This is a random number: [%d]\n", rand() % 100);
    printf("This is a random number: [%d]\n", rand() % 100);
    printf("This is a random number: [%d]\n", rand() % 100);
    printf("This is a random number: [%d]\n", rand() % 100);
    printf("This is a random number: [%d]\n", rand() % 100);

    return 0;
}
// Function Definitions


