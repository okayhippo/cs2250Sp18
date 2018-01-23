/*
 * =====================================================================================
 *
 *       Filename:  floatDiv.c
 *
 *    Description:  learn about float division
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:23:59 AM
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
    int age = 25;
    int grade = 303;
    double result;

    result = (double)age/grade;
    printf("result = %lf\n", result);

    //Print a double as an int
    printf("result = %d\n", (int)result);
    

    return 0;
}
// Function Definitions


