/*
 * =====================================================================================
 *
 *       Filename:  coolMath.c
 *
 *    Description:  Learn some cool math stuff
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:39:34 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>    //sqrt(), pow(), abs(), fabs()

// Constants

// Function Prototypes

// Main Function
int main()
{
    //Calculate the triangle sides
    double sideA = 4.0;
    double sideB = 5.0;
    double sideC;

    sideC = sqrt(pow(sideA, 2) + pow(sideB, 2));

    printf("sideA: %lf\nsideB: %lf\nsideC: %lf\n", sideA, sideB, sideC);
    
    double a = -99.0;
    printf("The abs of %lf is %lf.\n", a, fabs(a));

    return 0;
}
// Function Definitions


