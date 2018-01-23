/*
 * =====================================================================================
 *
 *       Filename:  floats.c
 *
 *    Description:  Floating point fun
 *
 *        Version:  1.0
 *        Created:  01/18/2018 08:53:20 AM
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
    const double GRAVITY = 9.8;
    const double LB_TO_KG = 0.453592;

// Function Prototypes

// Main Function
int main()
{
    //Variables
    double weight = 2.4;

    printf("My w is %lf.\n", weight);

    printf("Please enter your weight in pounds.\n");
    scanf("%lf", &weight);

    printf("Your weight in kg is %lf\n", weight * LB_TO_KG);
    printf("Your real weight is %lf.\n", weight * LB_TO_KG * GRAVITY);

    return 0;
}
// Function Definitions


