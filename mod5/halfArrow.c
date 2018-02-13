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
    int totalArrowHeight;
    
    printf("Enter arrow base height:\n");
    scanf("%d", &arrowBaseHeight);
    printf("Enter arrow base width:\n");
    scanf("%d", &arrowBaseWidth);
    printf("Enter arrow head width:\n");
    scanf("%d", &arrowHeadWidth);

    totalArrowHeight = arrowHeadWidth + arrowBaseHeight;

    // Print arrow base
    for (int i = 1; i <= totalArrowHeight; i++) {
        
        for (int j = 1; j <= arrowBaseHeight; j++) {
            
            for (int k = 1; k <= arrowBaseWidth; k++) {
                printf("*");
            }

            printf("\n");

        }


        // Print arrow head
        for (int i = arrowHeadWidth; i > 0; i--) {
            for (int j = arrowHeadWidth; j > 0; j--) {
                printf("*");
            }
            
            printf("\n");

        }

    }

    return 0;
}
// Function Definitions


