/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/22/2018 08:41:34 AM
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
const int METER_KM = 1000;
const int MIN_HOUR = 60;
const int SEC_MIN = 60;

// Function Prototypes
double Velocity(double, double);

double KmToM(double);

double HrToM(double);

// Main Function
int main()
{
    double distance = 0.0;
    double myTime = 0.0;
    double newDistance = 0.0;
    double newTime = 0.0;
    double velocity;

    printf("Please enter your distance traveled: ");
    scanf("%lf", &distance);

    printf("How long were you traveling: ");
    scanf("%lf", &myTime);

    velocity = Velocity(distance, myTime);
    printf("%lf km / h\n", velocity);

    newDistance = KmToM(distance);  // returns meters
    newTime = HrToM(myTime);        // returns minutes

    printf("\nYou traveled:\t%lf km\t%lf m\n", distance, newDistance);
    printf("You took:\t%lf hours\t%lf minutes\n", myTime, newTime);

    velocity = Velocity(newDistance, newTime);
    printf("%lf km / h\n", velocity);

    return 0;
}

// Function Definitions
double Velocity (double d, double t) {
    return d / t;
}

double KmToM (double km) {
    return km * METER_KM;
}

double HrToM(double hrs) {
    return hrs * MIN_HOUR;
}


