/*
 * =====================================================================================
 *
 *       Filename:  halfArrow.c
 *
 *    Description:  Draw a half arrow (Ch 4 Assignment)
 *
 *        Version:  1.0
 *        Created:  02/08/2018 10:08:08 AM
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
    int arrowBaseHeight;
    int arrowBaseWidth;
    int arrowHeadWidth;
    int i;
    int j;
    
    printf("Enter arrow base height:\n");
    scanf("%d", &arrowBaseHeight);
    printf("Enter arrow base width:\n");
    scanf("%d", &arrowBaseWidth);
    do {
        printf("Enter arrow head width:\n");
        scanf("%d", &arrowHeadWidth);

        if (arrowHeadWidth <= arrowBaseWidth) {
            printf("Invalid entry... Please try again\n\n");
        }
    }while(arrowHeadWidth <= arrowBaseWidth);

    // Print arrow base
    for ( i = 1; i <= arrowBaseHeight; i++) {

        for (j = 1; j <= arrowBaseWidth; j++) {
            printf("*");
        }

        printf("\n");
    }


    // Print arrow head
    for (i = arrowHeadWidth; i > 0; i--) {
        
        for (j = 0; j < i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
// Function Definitions


