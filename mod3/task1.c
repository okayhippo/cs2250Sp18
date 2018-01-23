/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Calculate BMI from kg
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:40:39 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    double weight, height, bmi;
    double lbsWeight;
    
    printf("Do you want to enter your weight in lbs?\n
            This may result in a slight loss of precision. (y/n)");
    
    if (y) {
        printf("Please enter your weight in lbs");
        scanf ("%lf", &lbsWeight);
    } 
    else if (n) {
        printf("Please enter your weight in kg.");
        scanf("%lf", &weight);
        
    }

    printf("Please enter your weight in kg.");
    scanf("%lf", &weight);

    printf("Thank you, please enter your height in meters.");
    scanf("%lf", &height);

    bmi = weight / pow(height, 2);

    printf("Your BMI is %lf.\n", bmi);

    return 0;
}
// Function Definitions


