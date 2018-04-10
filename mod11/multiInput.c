/*
 * =====================================================================================
 *
 *       Filename:  multiInput.c
 *
 *    Description:  Multiple input practice
 *
 *        Version:  1.0
 *        Created:  04/03/2018 08:42:45 AM
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
void Help();

// Main Function
int main()
{
    int ft, in;
    int hh, mm;
    char AmPm[3];
    int rc;

    printf("Enter feet and inches separated by a space: ");
    scanf("%d %d", &ft, &in);
    
    // Check for inches >= 12
    if (in >= 12) {
        ft += (in / 12);
        in %= 12;
    }

    printf("You entered: %d feet and %d inches\n", ft, in);

    printf("Enter the time in this format: HH:MM AM/PM: ");
    
    // Validate scanf
    rc = scanf("%2d:%2d %2s", &hh, &mm, AmPm);
    if (rc != 3) {
        Help();
    }
    else {
        printf("You entered: %d:%d %s\n", hh, mm, AmPm);
    }


    return 0;
}


// Function Definitions
void Help() {

    printf("Bad format. Please enter time as shown below.\n");
    printf("HH:MM AM/PM\n");
    printf("NOTES:\n Many people forget the colon. That is an essential key.");
    return;

}
