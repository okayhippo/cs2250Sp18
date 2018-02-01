/*
 * =====================================================================================
 *
 *       Filename:  logicalComp.c
 *
 *    Description:  Using logic operators
 *
 *        Version:  1.0
 *        Created:  02/01/2018 08:44:24 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>    // Boolean variables

// Constants

// Function Prototypes

// Main Function
int main()
{
    int grade;
    bool success = true;

    printf("Enter your grade\n");
    scanf("%d", &grade);

    
    if(grade >= 90 && grade <= 100) {
        printf("You got an A\n");
    }
    else if(grade >= 80 && grade < 90) {
        printf("You got an B\n");
    }
    else if(grade >= 70 && grade < 80) {
        printf("You got an C\n");
    }
    else {
        printf("You got an E. Sorry amigo. Take the class again.\n");
        success = false;
    }

    if (success) {
        printf("Congrats!\n");
    }
    else {
        printf("See your next semester\n");
    }


    return 0;
}
// Function Definitions


