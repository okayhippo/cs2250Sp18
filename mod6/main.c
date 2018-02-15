/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Store peoples' weights in an array and print values and
 *                  average, max
 *
 *        Version:  1.0
 *        Created:  02/15/2018 08:34:24 AM
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
const int LEN = 5;

// Function Prototypes

// Main Function
int main()
{
    int guess = 0;
    double weight[LEN];
    double totalWeight = 0;
    double maxWeight;


    do {
        printf("Enter weight %d:\n", guess + 1);
        scanf("%lf", &weight[guess]);

        if (weight[guess] <= 0) {
            printf("That is not a valid weight. Please enter a number > 0\n");
            continue;
        }

        if (weight[guess] >= maxWeight) {
            maxWeight = weight[guess];
        }

        guess++;
    } while(guess < LEN);

    
    // Print entered values
    printf("You entered: ");
    for (int i = 0; i < LEN; i++) {
        printf("%lf ", weight[i]);
    }
    printf("\n\n");

    // Print sum
    printf("Total weight: ");
    for (int i = 0; i < LEN; i++) {
        totalWeight += weight[i];
    }
    printf("%lf\n", totalWeight);

    // Print average weight
    printf("Average weight: %lf\n", (totalWeight / LEN));

    // Print max weight
    printf("Max weight: %lf\n", maxWeight);

    return 0;
}
// Function Definitions


