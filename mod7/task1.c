/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Take to numbers (floats) from the user
 *
 *                  DEFINE:
 *                  sum(): returns sum (float)
 *                  prod(): returns sum (float)
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:32:01 AM
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
// FUNC: sum()
// take two floats
// RET: returns int sum
int sum(double, double);

// FUNC: prod()
// take two floats
// RET: returns double product
double prod(double, double);

// Main Function
int main() {
    double num1;
    double num2;

    printf("Please enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("%d\n", sum(num1, num2));
    printf("%lf\n", prod(num1, num2));

    return 0;
}

// Function Definitions
int sum(double x, double y) {
    int sum = (int)(x + y);

    return sum;
}

double prod(double x, double y) {
    double product = x * y;

    return product;
}

