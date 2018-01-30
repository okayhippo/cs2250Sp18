/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  Basics of branching
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:51:47 AM
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
    int age;

    printf("What is your age?\n");
    scanf("%d", &age);

    printf("\nAge is %d\n", age);

    
    //  Voting Age
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    }
    else {
        printf("\nYou are not eligible to vote.\n");
        printf("Wait %d years to vote.\n", 18 - age);
    }
    
    //  Drinking Age
    if (age >= 21) {
        printf("You can buy alcohol.\n");
    }
    else {
        printf("\nYou cannot buy alcohol.\n");
        printf("Wait %d years to buy alcohol.\n", 21 - age);
    }
    
    //  Retirement Age
    if (age >= 65) {
        printf("You can retire.\n");
    }
    else {
        printf("\nYou are not eligible to retire.\n");
        printf("To retire at 65, wait %d years.\n", 65 - age);
    }


    //  If Age == 22
    if (age == 22) {
        printf("\nCongratulations, you've peaked.\n");
    }
    else if (age < 22) {
        printf("\nYou have %d years left until you reach your peak.\n", 22 - age);
    }
    else if (age > 22) {
        printf("\nYou are %d years past your peak. That's some bad luck.\n", age - 22);
    }

    printf("Adios amigo.\n");

    return 0;
}
// Function Definitions


